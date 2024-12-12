#ifndef ATECC508A_ATECC508A_UTILITY_H_
#define ATECC508A_ATECC508A_UTILITY_H_

#include <stdint.h>
#include <stddef.h>

/**
 * @brief Function to Send Group buffer to Device
 * @param group_data Pointer to buffer storing group bytes
 * @param group_size Size of byte-sized group buffer
 *
 * @return Returns 0 on Success and Negative on Error
 */
int WriteCommand(const uint8_t *group_data, size_t group_size);

/**
 * @brief Function to Receive and Verify response from the Device
 * @param repsonse Pointer to array to store the expected response
 * @param response_size Size of response array
 *
 * @return Returns 0 on Success and Negative on Error
 */
int ReadResponse(uint8_t *response, size_t response_size);

#endif /* ATECC508A_ATECC508A_UTILITY_H_ */
