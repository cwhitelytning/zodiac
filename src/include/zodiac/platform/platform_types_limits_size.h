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
 * @def SIZE_MAX
 * @brief Maximum value for a size_t type on a 64-bit platform.
 *
 * This macro defines the maximum value that can be represented by the size_t
 * type on a 64-bit platform.
 */
#if defined(ZODIAC_PLATFORM_64_BIT)
#   ifndef SIZE_MAX
#       define SIZE_MAX UINT64_MAX ///< Maximum value for a size_t type on a 64-bit platform.
#   endif
#endif

/**
 * @def SIZE_MIN
 * @brief Minimum value for a size_t type on a 64-bit platform (commonly 0).
 *
 * This macro defines the minimum value that can be represented by the size_t
 * type on a 64-bit platform. It is commonly set to 0.
 */
#if defined(ZODIAC_PLATFORM_64_BIT)
#   ifndef SIZE_MIN
#       define SIZE_MIN UINT64_MIN ///< Minimum value for a size_t type on a 64-bit platform (commonly 0).
#   endif
#endif

/**
 * @def SIZE_MAX
 * @brief Maximum value for a size_t type on a 32-bit platform.
 *
 * This macro defines the maximum value that can be represented by the size_t
 * type on a 32-bit platform.
 */
#if defined(ZODIAC_PLATFORM_32_BIT)
#   ifndef SIZE_MAX
#       define SIZE_MAX UINT32_MAX ///< Maximum value for a size_t type on a 32-bit platform.
#   endif
#endif

/**
 * @def SIZE_MIN
 * @brief Minimum value for a size_t type on a 32-bit platform (commonly 0).
 *
 * This macro defines the minimum value that can be represented by the size_t
 * type on a 32-bit platform. It is commonly set to 0.
 */
#if defined(ZODIAC_PLATFORM_32_BIT)
#   ifndef SIZE_MIN
#       define SIZE_MIN UINT32_MIN ///< Minimum value for a size_t type on a 32-bit platform (commonly 0).
#   endif
#endif

#endif // ZODIAC_PLATFORM_TYPES_LIMITS_SIZE_H
