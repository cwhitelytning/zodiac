/**
 * @file platform_types_ssize.h
 * @brief Platform-specific ssize_t type definition.
 *
 * This header provides a conditional definition of the ssize_t type, which
 * is typically a signed type that is capable of storing the largest signed integral
 * number that the system can handle. It is often equivalent to the return type of
 * a read or similar system call, representing either a size or an error.
 */

#ifndef ZODIAC_PLATFORM_TYPES_SSIZE_H
#define ZODIAC_PLATFORM_TYPES_SSIZE_H

#ifndef _SSIZE_T

/**
 * @typedef ssize_t
 * @brief Platform-specific signed size type.
 *
 * The ssize_t type is a signed data type that is capable of storing the size
 * of any possible object, along with the special negative value -1 to indicate
 * an error returned by some system calls.
 */

#   ifdef ZODIAC_PLATFORM_64_BIT

typedef int64_t ssize_t; ///< 64-bit signed size type.

#   elif defined(ZODIAC_PLATFORM_32_BIT)

typedef int32_t ssize_t; ///< 32-bit signed size type.

#   endif
#endif  // _SSIZE_T

#endif // ZODIAC_PLATFORM_TYPES_SSIZE_H
