#ifndef ATECC508A_OPERATIONS_ATECC508A_CRC_H_
#define ATECC508A_OPERATIONS_ATECC508A_CRC_H_

#include <stdint.h>
#include <stddef.h>

// Function to calculate CRC-16
uint16_t ComputeCRC16(const uint8_t *data, size_t length);

#endif
