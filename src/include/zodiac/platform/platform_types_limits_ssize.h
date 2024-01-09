/**
 * @file platform_types_limits_ssize.h
 * @brief Defines the limits for the signed size type ssize_t depending on the platform.
 *
 * This header sets the maximum (SSIZE_MAX) and minimum (SSIZE_MIN) values that can
 * be stored in an ssize_t type, which are dependent on the underlying architecture.
 */

#ifndef ZODIAC_PLATFORM_TYPES_LIMITS_SSIZE_H
#define ZODIAC_PLATFORM_TYPES_LIMITS_SSIZE_H

/**
 * Definition of the maximum and minimum values for ssize_t on a 64-bit platform.
 * These limits correspond to the maximum and minimum values for a 64-bit signed integer.
 */
#if defined(ZODIAC_PLATFORM_64_BIT)
#   define SSIZE_MAX INT64_MAX ///< The largest value that can be represented by ssize_t on 64-bit architecture.
#   define SSIZE_MIN INT64_MIN ///< The smallest value that can be represented by ssize_t on 64-bit architecture.

/**
 * Definition of the maximum and minimum values for ssize_t on a 32-bit platform.
 * These limits correspond to the maximum and minimum values for a 32-bit signed integer.
 */
#elif defined(ZODIAC_PLATFORM_32_BIT)
#   define SSIZE_MAX INT32_MAX ///< The largest value that can be represented by ssize_t on 32-bit architecture.
#   define SSIZE_MIN INT32_MIN ///< The smallest value that can be represented by ssize_t on 32-bit architecture.
#endif

#endif // ZODIAC_PLATFORM_TYPES_LIMITS_SSIZE_H
