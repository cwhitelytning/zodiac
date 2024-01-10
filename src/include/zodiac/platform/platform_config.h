/**
 * @file platform_config.h
 * @brief Configuration file for platform-specific settings.
 *
 * This file provides configuration options for platform-specific settings.
 * It allows the user to enable or disable the usage of platform-specific types.
 */

#ifndef ZODIAC_PLATFORM_CONFIG_H
#define ZODIAC_PLATFORM_CONFIG_H

// -------------------------------------------------------------------------------
// Platform configuration
// -------------------------------------------------------------------------------

/**
 * @def USE_PLATFORM_INT
 * @brief Platform configuration macro for using platform-specific integer types.
 *
 * Define this macro if the platform-specific integer types should be used.
 * If this macro is not defined, the standard integer types from <stdint.h> will be used.
 */
// #define USE_PLATFORM_INT

/**
 * @def USE_PLATFORM_BOOL
 * @brief Platform configuration macro for using platform-specific boolean type.
 *
 * Define this macro if the platform-specific boolean type should be used.
 * If this macro is not defined, the standard boolean type from <stdbool.h> will be used.
 */
// #define USE_PLATFORM_BOOL

// -------------------------------------------------------------------------------
// End of platform configuration
// -------------------------------------------------------------------------------

#ifndef USE_PLATFORM_INT
#   include <stdint.h> ///< Include standard integer types if USE_PLATFORM_INT is not defined.
#endif

#ifndef USE_PLATFORM_BOOL
#   include <stdbool.h> ///< Include standard boolean type if USE_PLATFORM_BOOL is not defined.
#endif

#endif // ZODIAC_PLATFORM_CONFIG_H
