/**
 * @file platform_type_size.h
 * @brief Definition of size type depending on the platform bitness.
 *
 * @details This file defines the 'size_t' type according to the platform bitness.
 *          If the platform is 64 bits, 'size_t' is defined as 'uint64_t',
 *          and if the platform is 32 bits, 'size_t' is defined as 'uint32_t'.
 */

#ifndef ZODIAC_PLATFORM_TYPE_SIZE_H
#define ZODIAC_PLATFORM_TYPE_SIZE_H

#ifndef _SIZE_T

/**
 * @typedef size_t
 * @brief Platform-specific size type.
 *
 * The 'size_t' type is a platform-specific unsigned integer type that is capable
 * of representing the size of any possible object in memory.
 */

#   ifdef ZODIAC_PLATFORM_64_BIT

typedef uint64_t size_t; ///< 64-bit platform-specific size type.

#elif defined(ZODIAC_PLATFORM_32_BIT)

typedef uint32_t size_t; ///< 32-bit platform-specific size type.

#   endif
#endif  // _SIZE_T

#endif // ZODIAC_PLATFORM_TYPE_SIZE_H
