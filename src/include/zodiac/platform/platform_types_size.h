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

#include "platform_types_int.h" /*!< Include platform-specific integer type definitions. */

#if defined(ZODIAC_PLATFORM_64_BIT)
/**
 * @typedef size_t
 * @brief Type for representing sizes, defined as a 64-bit unsigned integer on a 64-bit platform.
 */
typedef uint64_t size_t;
#elif defined(ZODIAC_PLATFORM_32_BIT)
/**
 * @typedef size_t
 * @brief Type for representing sizes, defined as a 32-bit unsigned integer on a 32-bit platform.
 */
typedef uint32_t size_t;
#endif

#endif // ZODIAC_PLATFORM_TYPE_SIZE_H
