/**
 * @file platform.h
 * @brief Platform abstraction layer for the Zodiac project.
 *
 * This header file includes the necessary platform-specific headers required
 * by the operating system, architecture, compiler, and types used in the Zodiac project.
 * It acts as a central aggregate header to simplify platform-specific inclusion
 * in the codebase. This design pattern avoids redundancy through multiple includes
 * of the same header files within the project and ensures that each component is
 * included only once.
 *
 * Included are the following:
 * - Operating system abstractions
 * - Architecture-specific definitions
 * - Compiler-specific abstractions and attributes
 * - Fixed-width integer and other basic data types
 * - Limits for platform-specific types
 */

#ifndef ZODIAC_PLATFORM_H
#define ZODIAC_PLATFORM_H

/**
 * Include the configuration for the platform which might define platform,
 * OS, architecture, and compiler specifics needed for conditional compilation.
 */
#include "platform_config.h"

/**
 * Include the operating system abstraction header which contains macros, types,
 * and functions for abstracting operating system specific behavior.
 */
#include "platform_os.h"

/**
 * Include the architecture abstraction header which typically defines
 * architecture-specific types, macros, and inline assembly code.
 */
#include "platform_arch.h"

/**
 * Include the compiler abstraction header which provides macros and definitions
 * for managing differences between compilers, such as attribute syntax for inline,
 * packing structures, and more.
 */
#include "platform_compiler.h"

/**
 * Include the compiler specifiers abstraction header which defines additional
 * compiler-specific attributes and specifiers not covered in 'platform_compiler.h'.
 */
#include "platform_compiler_specifiers.h"

/**
 * Include the fixed-width data types and other basic data type definitions that
 * are invariant across different platforms for consistent cross-platform development.
 */
#include "platform_types.h"

/**
 * Include the header defining the limits for the platform-specific data types,
 * ensuring that the proper bounds are used for integers, size_t, and others
 * as dictated by the underlying hardware and compiler capabilities.
 */
#include "platform_types_limits.h"

#endif // ZODIAC_PLATFORM_H
