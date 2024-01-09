/**
 * @file platform_types_limits_size.h
 * @brief Defines size type limits based on platform bitness.
 *
 * This file provides the definitions of SIZE_MAX and SIZE_MIN macros which will
 * vary depending on the platform's bitness. These definitions ensure that the
 * correct maximum and minimum size values are used for the Zodiac platform,
 * whether it's a 32-bit or a 64-bit system.
 */

#ifndef ZODIAC_PLATFORM_TYPES_LIMITS_SIZE_H
#define ZODIAC_PLATFORM_TYPES_LIMITS_SIZE_H

/**
 * If the platform is 64-bit, define SIZE_MAX and SIZE_MIN using the limits
 * from the 64-bit unsigned integer type.
 */
#if defined(ZODIAC_PLATFORM_64_BIT)
#   define SIZE_MAX UINT64_MAX ///< Maximum value for a size_t type on a 64-bit platform.
#   define SIZE_MIN UINT64_MIN ///< Minimum value for a size_t type on a 64-bit platform (commonly 0).
/**
 * If the platform is 32-bit, define SIZE_MAX and SIZE_MIN using the limits
 * from the 32-bit unsigned integer type.
 */
#elif defined(ZODIAC_PLATFORM_32_BIT)
#   define SIZE_MAX UINT32_MAX ///< Maximum value for a size_t type on a 32-bit platform.
#   define SIZE_MIN UINT32_MIN ///< Minimum value for a size_t type on a 32-bit platform (commonly 0).
#endif

#endif // ZODIAC_PLATFORM_TYPES_LIMITS_SIZE_H
