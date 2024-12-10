#include "ATECC508A/atecc508a_packet.h"
#include <stdlib.h>
#include <string.h>

uint8_t *stuff_packet(const Packet *packet, size_t *out_size)
{
    // Calculate total size: opcode (1) + param1 (1) + param2 (2) + data
    *out_size = 1 + 1 + 2 + packet->data_length;

    uint8_t *buffer = (uint8_t *)malloc(*out_size);
    if (!buffer)
    {
        return NULL; // Memory allocation failed
    }

    buffer[0] = packet->opcode;
    buffer[1] = packet->param1;
    buffer[2] = (uint8_t)(packet->param2 & 0xFF);       // Low byte of param2
    buffer[3] = (uint8_t)((packet->param2 >> 8) & 0xFF); // High byte of param2

    if (packet->data_length > 0 && packet->data)
    {
        memcpy(&buffer[4], packet->data, packet->data_length);
    }

    return buffer;
}
