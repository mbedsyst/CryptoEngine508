#include <stdint.h>
#include "ATECC508A/operations/atecc508a_random.h"
#include "Drivers/I2C.h"

int main()
{
	uint8_t val[4];
	I2C1_Init();

	while(1)
	{
		ATECC508A_GenerateRandom(val);
	}
}
