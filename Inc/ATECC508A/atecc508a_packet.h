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

/**
 * @brief Populates the Packet structure with Opcode, Parameters and Data
 *
 * @param packet Pointer to struct of type Packet
 * @param out_size Size of the Packet
 *
 * @return Pointer to the buffer storing the Packet
 */
uint8_t *StuffPacket(const Packet *packet, size_t *out_size);

#endif /* ATECC508A_ATECC508A_PACKET_H_ */
