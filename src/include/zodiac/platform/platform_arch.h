/**
 * @file platform_arch.h
 * Definition of Zodiac platform architecture macros.
 */

#ifndef ZODIAC_PLATFORM_ARCH_H
#define ZODIAC_PLATFORM_ARCH_H

/**
 * @brief Check various pre-defined macros to determine
 *        if the current architecture is 64-bit.
 */
#if defined(__LP64__) || defined(_WIN64) || defined(__x86_64__) || defined(__ppc64__) || defined(__aarch64__) || \
    defined(_M_X64) || defined(_M_ARM64) || defined(__sparc64__) || defined(__mips64)
#   define ZODIAC_PLATFORM_64_BIT  ///< Architecture is identified as 64-bit.

/**
 * @brief If the architecture is not identified as 64-bit,
 *        check for 32-bit architecture definition macros.
 */
#elif defined(__ILP32__) || defined(_WIN32) || defined(__i386__) || defined(__ppc__) || defined(_M_IX86) || \
      defined(_M_ARM) || defined(__sparc__) || defined(__mips__)
#   define ZODIAC_PLATFORM_32_BIT  ///< Architecture is identified as 32-bit.

#else
#   error "Unknown architecture"  ///< Error directive if the architecture is not recognized.
#endif

#endif // ZODIAC_PLATFORM_ARCH_H