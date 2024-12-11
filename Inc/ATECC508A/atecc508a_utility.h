#ifndef ATECC508A_ATECC508A_UTILITY_H_
#define ATECC508A_ATECC508A_UTILITY_H_

#include <stdint.h>
#include <stddef.h>

int WriteCommand(const uint8_t *group_data, size_t group_size);
int ReadResponse(uint8_t *response, size_t response_size);

#endif /* ATECC508A_ATECC508A_UTILITY_H_ */
