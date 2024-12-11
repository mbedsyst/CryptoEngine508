#ifndef ATECC508A_OPERATIONS_ATECC508A_RANDOM_H_
#define ATECC508A_OPERATIONS_ATECC508A_RANDOM_H_

#include <stdint.h>
#include <stddef.h>

/**
 * @brief Generates a 32-bit random number using the ATECC508A's RANDOM command. *
 * @param[out] random_number A buffer to store the 32-byte random number.
 * @return int 0 on success, or a non-zero error code on failure.
 */
int ATECC508A_GenerateRandom(uint8_t *random_number);

#endif /* ATECC508A_OPERATIONS_ATECC508A_RANDOM_H_ */
