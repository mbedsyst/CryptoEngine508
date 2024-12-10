#include "ATECC508A/atecc508a_crc.h"

uint16_t calculate_crc(const uint8_t *data, size_t length)
{
    uint16_t crc = 0x0000; // Initial value
    uint8_t bit;

    for (size_t i = 0; i < length; i++)
    {
        crc ^= (uint16_t)data[i] << 8;

        for (bit = 0; bit < 8; bit++)
        {
            if (crc & 0x8000)
            {
                crc = (crc << 1) ^ 0x8005;
            }
            else
            {
                crc = crc << 1;
            }
        }
    }

    return crc;
}
