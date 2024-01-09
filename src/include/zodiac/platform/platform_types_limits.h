/**
 * @file platform_type_limits.h
 * @brief Includes all platform-specific type limit definitions.
 *
 * This header file acts as an aggregator of platform-specific type limit definitions.
 * It includes the headers for integer type limits and size type limits which,
 * depending on the compilation target, define the appropriate range of values
 * for different data types (e.g., integers of various sizes, size_t, etc.) on the
 * Zodiac platform.
 */

#ifndef ZODIAC_PLATFORM_TYPE_LIMITS_H
#define ZODIAC_PLATFORM_TYPE_LIMITS_H

#include "platform_types_limits_int.h"      ///< Include integer type limits.
#include "platform_types_limits_size.h"     ///< Include size type limits based on platform bitness.
#include "platform_types_limits_ssize.h"    ///< Include signed size type limits based on platform bitness.

#endif // ZODIAC_PLATFORM_TYPE_LIMITS_H
