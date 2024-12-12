#ifndef ATECC508A_ATECC508A_GROUP_H_
#define ATECC508A_ATECC508A_GROUP_H_

#include <stdint.h>
#include <stddef.h>

/**
 * @brief Function to create a group from packet bytes
 *
 * @param packet_data Pointer to buffer containing packet data
 * @param packet_size Size of byte sized packet buffer
 * @param out_size Size of populated group buffer
 *
 * @return Pointer to the buffer storing group bytes
 */
uint8_t *StuffGroup(const uint8_t *packet_data, size_t packet_size, size_t *out_size);

#endif /* ATECC508A_ATECC508A_GROUP_H_ */
