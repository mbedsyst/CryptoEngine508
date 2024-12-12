#include "ATECC508A/atecc508a_packet.h"
#include <stdlib.h>
#include <string.h>

/* Function to populate the packet buffer with Opcode, Parameters and Data.
 */
uint8_t *StuffPacket(const Packet *packet, size_t *out_size)
{
    // Calculate total size: opcode (1) + param1 (1) + param2 (2) + data
    *out_size = 1 + 1 + 2 + packet->data_length;
    // Create buffer array of type uint8_t
    uint8_t *buffer = (uint8_t *)malloc(*out_size);
    if (!buffer)
    {
        return NULL;
    }
    // Populate the Opcode and Parameters
    buffer[0] = packet->opcode;
    buffer[1] = packet->param1;
    buffer[2] = (uint8_t)(packet->param2 & 0xFF);        // Low byte of param2
    buffer[3] = (uint8_t)((packet->param2 >> 8) & 0xFF); // High byte of param2
    // If packet contains valid data, copy contents to buffer
    if (packet->data_length > 0 && packet->data)
    {
        memcpy(&buffer[4], packet->data, packet->data_length);
    }
    // Return the buffer to stuff group
    return buffer;
}
