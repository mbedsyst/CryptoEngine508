#include "ATECC508A/atecc508a_group.h"
#include "ATECC508A/atecc508a_crc.h"
#include <stdlib.h>

/* Function to populate the Group buffer with Count, Data packet
 * and 16-bit CRC value at the end of the buffer.
 */
uint8_t *StuffGroup(const uint8_t *packet_data, size_t packet_size, size_t *out_size)
{
    // Total group size: count (1) + packet + CRC (2)
    *out_size = 1 + packet_size + 2;
    // Create buffer array of type uint8_t
    uint8_t *group = (uint8_t *)malloc(*out_size);
    if (!group)
    {
        return NULL;
    }
    // Fill Count (count byte + packet + CRC)
    group[0] = (uint8_t)(packet_size + 3);
    // Copy packet data into group
    for (size_t i = 0; i < packet_size; i++)
    {
        group[1 + i] = packet_data[i];
    }
    // Calculate CRC
    uint16_t crc = ComputeCRC16(group, 1 + packet_size);
    // Append 16-bit CRC value as two bytes at the end of the buffer
    group[*out_size - 2] = (uint8_t)(crc & 0xFF);        // CRC Low byte
    group[*out_size - 1] = (uint8_t)((crc >> 8) & 0xFF); // CRC High byte
    // Return the buffer for transmission
    return group;
}
