#ifndef ATECC508A_ATECC508A_PACKET_H_
#define ATECC508A_ATECC508A_PACKET_H_

#include <stdint.h>
#include <stddef.h>

// Structure representing a packet
typedef struct
{
    uint8_t opcode;
    uint8_t param1;
    uint16_t param2;
    const uint8_t *data;
    size_t data_length;
} Packet;

// Function to create a serialized packet from the Packet structure
uint8_t *stuff_packet(const Packet *packet, size_t *out_size);

#endif /* ATECC508A_ATECC508A_PACKET_H_ */
