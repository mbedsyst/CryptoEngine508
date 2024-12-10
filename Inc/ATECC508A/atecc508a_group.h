#ifndef ATECC508A_ATECC508A_GROUP_H_
#define ATECC508A_ATECC508A_GROUP_H_

#include <stdint.h>
#include <stddef.h>

// Function to create a group from packet bytes
uint8_t *stuff_group(const uint8_t *packet_data, size_t packet_size, size_t *out_size);

#endif /* ATECC508A_ATECC508A_GROUP_H_ */
