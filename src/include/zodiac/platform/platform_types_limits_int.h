/**
 * @file platform_types_limits_int.h
 * @brief Defines minimum and maximum limits for integer types.
 *
 * This file includes a series of macro definitions that establish the minimum and
 * maximum values for various integer types (e.g., uint8_t, uint16_t, int8_t, int16_t, etc.)
 * as used within the Zodiac platform. These limits are meant to provide portable
 * definitions for integer range bounds across different compilers and architectures.
 */

#ifndef ZODIAC_PLATFORM_TYPES_LIMITS_INT_H
#define ZODIAC_PLATFORM_TYPES_LIMITS_INT_H

#define UINT8_MIN   (uint8_t)(0)                        ///< Minimum value for an unsigned 8-bit integer.
#define UINT16_MIN  (uint16_t)(0)                       ///< Minimum value for an unsigned 16-bit integer.
#define UINT32_MIN  (uint32_t)(0)                       ///< Minimum value for an unsigned 32-bit integer.
#define UINT64_MIN  (uint64_t)(0)                       ///< Minimum value for an unsigned 64-bit integer.

#define UINT8_MAX   (uint8_t)(~((uint8_t)0))            ///< Maximum value for an unsigned 8-bit integer.
#define UINT16_MAX  (uint16_t)(~((uint16_t)0))          ///< Maximum value for an unsigned 16-bit integer.
#define UINT32_MAX  (uint32_t)(~((uint32_t)0))          ///< Maximum value for an unsigned 32-bit integer.
#define UINT64_MAX  (uint64_t)(~((uint64_t)0))          ///< Maximum value for an unsigned 64-bit integer.

#define INT8_MAX    (int8_t)((1 << (8 - 1)) - 1)        ///< Maximum value for a signed 8-bit integer.
#define INT16_MAX   (int16_t)((1 << (16 - 1)) - 1)      ///< Maximum value for a signed 16-bit integer.
#define INT32_MAX   (int32_t)((1L << (32 - 1)) - 1)     ///< Maximum value for a signed 32-bit integer.
#define INT64_MAX   (int64_t)((1LL << (64 - 1)) - 1)    ///< Maximum value for a signed 64-bit integer.

#define INT8_MIN    (int8_t)(-INT8_MAX - 1)             ///< Minimum value for a signed 8-bit integer.
#define INT16_MIN   (int16_t)(-INT16_MAX - 1)           ///< Minimum value for a signed 16-bit integer.
#define INT32_MIN   (int32_t)(-INT32_MAX - 1L)          ///< Minimum value for a signed 32-bit integer.
#define INT64_MIN   (int64_t)(-INT64_MAX - 1LL)         ///< Minimum value for a signed 64-bit integer.

#endif // ZODIAC_PLATFORM_TYPES_LIMITS_INT_H
