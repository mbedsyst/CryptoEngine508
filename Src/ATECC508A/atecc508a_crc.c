#include "ATECC508A/atecc508a_crc.h"


/* This function calculates a CRC-16 value for a given data array based on the
 * polynomial x^16 + x^15 + x^2 + 1. The CRC is used to verify data integrity.
 * CRC-16 Polynomial (Hex):     0x8005
 * CRC-16 Polynomial (Binary):  0b1000 0000 0000 0101
 */
uint16_t ComputeCRC16(const uint8_t *data, size_t length)
{
	 // Initial value of the CRC code
    uint16_t CRC = 0x0000;
    uint8_t bit;

    for (size_t i = 0; i < length; i++)
    {
    	CRC ^= (uint16_t)data[i] << 8;

        for (bit = 0; bit < 8; bit++)
        {
        	// Check if MSB is set
            if (CRC & 0x8000)
            {

            	CRC = (CRC << 1) ^ 0x8005;
            }
            else
            {
            	CRC = CRC << 1;
            }
        }
    }

    return CRC;
}
