#ifndef ATECC508A_OPERATIONS_ATECC508A_CRC_H_
#define ATECC508A_OPERATIONS_ATECC508A_CRC_H_

#include <stdint.h>
#include <stddef.h>

/**
 * @brief Computes the 16-bit CRC of a data buffer using the 0x8005 polynomial.
 *
 * @param data Pointer to the data buffer to be processed.
 * @param length The number of bytes in the data buffer.
 *
 * @return The computed 16-bit CRC value.
 */

uint16_t ComputeCRC16(const uint8_t *data, size_t length);

#endif

/**
 * @brief
 * @param
 * @param
 *
 * @return
 */
