#include "ATECC508A/atecc508a_utility.h"
#include "Drivers/I2C.h"

#define ATECC508A_I2C_ADDRESS 0xC0

int WriteCommand(const uint8_t *group_data, size_t group_size)
{
    if (!group_data || group_size == 0)
    {
        return -1;
    }

    I2C1_Start();
    I2C1_SendAddress(ATECC508A_I2C_ADDRESS, 0);
    for (size_t i = 0; i < group_size; i++)
    {
        I2C1_SendData(group_data[i]);
    }
    I2C1_Stop();

    return 0;
}

int ReadResponse(uint8_t *response, size_t response_size)
{
    if (!response || response_size == 0)
    {
        return -1;
    }

    I2C1_Start();
    I2C1_SendAddress(ATECC508A_I2C_ADDRESS, 1);
    for (size_t i = 0; i < response_size; i++)
    {
        response[i] = I2C1_ReadData();
    }
    I2C1_Stop();

    return 0;
}
