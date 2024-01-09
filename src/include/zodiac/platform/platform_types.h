/**
 * @file platform_type.h
 * @brief Master header for the platform-specific type definitions.
 *
 * This file includes all the necessary headers that define various platform-specific types
 * such as integers of fixed widths, the size_t type, a boolean type, and a nullptr type.
 * The actual type definitions are contained in their respective headers.
 *
 * @note Make sure that the platform bitness (e.g., ZODIAC_PLATFORM_64_BIT) is properly
 * defined in the build environment or in the preceding code before including this header
 * to ensure that the types are correctly configured for your platform.
 */

#ifndef ZODIAC_PLATFORM_TYPE_H
#define ZODIAC_PLATFORM_TYPE_H

#include "platform_types_int.h"             ///< Include fixed-width integer types.
#include "platform_types_size.h"            ///< Include platform-specific size type definitions.
#include "platform_types_ssize.h"           ///< Include platform-specific signed size type definitions.
#include "platform_types_bool.h"            ///< Include platform-specific boolean type definitions.
#include "platform_types_nullptr.h"         ///< Include platform-specific nullptr type definitions.

#include "platform_callback_sender.h"       ///< Include callback sender type.

#endif // ZODIAC_PLATFORM_TYPE_H
