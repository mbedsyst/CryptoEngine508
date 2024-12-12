#include "ATECC508A/operations/atecc508a_random.h"
#include "ATECC508A/atecc508a_packet.h"
#include "ATECC508A/atecc508a_group.h"
#include "ATECC508A/atecc508a_crc.h"
#include "ATECC508A/atecc508a_utility.h"

#include <stdlib.h>
#include <string.h>

#define GENERATE_RANDOM	0x1B
#define MODE0			0x00
#define MODE1			0x01
#define ZERO8			0x00
#define ZERO16			0x0000

int ATECC508A_GenerateRandom(uint8_t *random_number)
{
    if (!random_number)
    {
        return -1;
    }

    Packet random_packet =
    {
        .opcode = GENERATE_RANDOM,
        .param1 = MODE0,
        .param2 = ZERO16,
        .data = NULL,
        .data_length = 0
    };

    size_t packet_size;
    uint8_t *packet_data = StuffPacket(&random_packet, &packet_size);
    if (!packet_data)
    {
        return -2;
    }

    size_t group_size;
    uint8_t *group_data = StuffGroup(packet_data, packet_size, &group_size);
    free(packet_data);

    if (!group_data)
    {
        return -3;
    }

    if (WriteCommand(group_data, group_size) != 0)
    {
        free(group_data);
        return -4;
    }
    free(group_data);

    uint8_t response[35] = {0};
    if (read_response(response, sizeof(response)) != 0)
    {
        return -5;
    }

    uint16_t calculated_crc = calculate_crc(response, sizeof(response) - 2);
    uint16_t response_crc = (response[33] | (response[34] << 8));
    if (calculated_crc != response_crc)
    {
        return -6;
    }

    memcpy(random_number, &response[1], 32);

    return 0;
}

