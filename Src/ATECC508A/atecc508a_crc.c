#include "ATECC508A/atecc508a_crc.h"

/* CRC-16 Polynomial: 0x8005
 * 					  0b1000 0000 0000 0101
 *
 * */

uint16_t ComputeCRC16(const uint8_t *data, size_t length)
{
    uint16_t CRC = 0x0000; // Initial value
    uint8_t bit;

    for (size_t i = 0; i < length; i++)
    {
    	CRC ^= (uint16_t)data[i] << 8;

        for (bit = 0; bit < 8; bit++)
        {
        	// Check if MSB is set
            if (CRC & 0x8000)
            {
            	CRC = (crc << 1) ^ 0x8005;
            }
            else
            {
            	CRC = crc << 1;
            }
        }
    }

    return crc;
}
