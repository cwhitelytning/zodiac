/**
 * @file compiler_specifiers.h
 * @brief Compiler specifier and macro definitions for the Zodiac platform.
 *
 * This file contains a collection of macro definitions that abstract compiler-specific
 * attributes and commands to enhance portability of the code across different platforms
 * and compiler suites. The macros allow for consistent usage of compiler-specific
 * attributes such as inline, noinline, and visibility attributes among others, without
 * having to clutter the code with #ifdef checks everywhere they're used.
 *
 * Macros for compiler features like inlining, linking, and optimization attributes
 * can be found here. Additionally, this file takes into account the specific needs
 * of different compilers including MSVC, GCC, Clang, Intel, and more.
 *
 * Usage of these macros can simplify the transition between compilers or platforms
 * as only this file would need to be altered to fit the characteristics of the new environment,
 * leaving the rest of the codebase more clean and stable.
 */

#ifndef ZODIAC_PLATFORM_COMPILER_SPECIFIERS_H
#define ZODIAC_PLATFORM_COMPILER_SPECIFIERS_H

/// Defines a method or variable as static.
#define ZDC_STATIC static

/// Defines a function as inline, suggesting that the compiler inserts the function's body where the function call is.
#define ZDC_INLINE inline

/// Defines a variable as const, indicating the variable cannot be changed after it is initialized.
#define ZDC_CONST const

/// Defines a variable as volatile, instructing the compiler the variable can be changed at any time without any action being taken by the code.
#define ZDC_VOLATILE volatile

/// Defines a declaration as external, the storage for the object has to be found in another file outside of the current scope.
#define ZDC_EXTERN extern

/// Combines ZDC_STATIC and ZDC_INLINE specifiers for defining a static inline function.
#define ZDC_STATIC_INLINE ZDC_STATIC ZDC_INLINE

/// Prevents a function from being considered for inlining.
#define ZDC_NO_INLINE __attribute__((noinline))

/// Indicates that the function does not return.
#define ZDC_NO_RETURN __attribute__((noreturn))

/// Indicates that a variable is not used.
#define ZDC_UNUSED __attribute__((unused))

/// Specifies that the structure or union should have the smallest possible alignment.
#define ZDC_PACKED __attribute__((packed))

#ifdef ZODIAC_PLATFORM_WINDOWS
/// Defines the export marker for dynamic linking in Windows.
#   define ZDC_DLLEXPORT __declspec(dllexport)
#elif defined(ZODIAC_PLATFORM_UNIX_LIKE)
/// Defines the default visibility attribute for exporting symbols on Unix-like systems.
#   define ZDC_DLLEXPORT __attribute__((visibility("default")))
#endif

/// Defines the export marker for dynamic linking in C linkage.
#define ZDC_C_DLLEXPORT ZDC_EXTERN "C" ZDC_DLLEXPORT

/// Definitions for force inline across different compilers
#ifdef ZODIAC_COMPILER_MSVC
/// Force inline specification for MSVC compiler.
#   define ZDC_FORCE_INLINE __forceinline
#elif defined(ZODIAC_COMPILER_GCC) || defined(ZODIAC_COMPILER_CLANG)
/// Force inline specification using the always_inline attribute for GCC or Clang compilers.
#   define ZDC_FORCE_INLINE __attribute__((always_inline)) ZDC_INLINE
#elif defined(ZODIAC_COMPILER_INTEL)
/// Force inline specification for the Intel compiler.
#   define ZDC_FORCE_INLINE __attribute__((always_inline)) ZDC_INLINE
#elif defined(ZODIAC_COMPILER_IBM)
/// Force inline specification for the IBM compiler.
#   define ZDC_FORCE_INLINE __attribute__((always_inline)) ZDC_INLINE
#elif defined(ZODIAC_COMPILER_SOLARIS)
/// Force inline specification for the Solaris compiler.
#   define ZDC_FORCE_INLINE __attribute__((always_inline)) ZDC_INLINE
#elif defined(ZODIAC_COMPILER_BORLAND)
/// Force inline specification for the Borland compiler.
#   define ZDC_FORCE_INLINE __inline
#elif defined(ZODIAC_COMPILER_IAR)
/// Force inline specification for the IAR Systems compiler.
#   define ZDC_FORCE_INLINE __ramfunc
#elif defined(ZODIAC_COMPILER_ARM)
/// Force inline specification for the ARM compiler.
#   define ZDC_FORCE_INLINE __attribute__((always_inline)) ZDC_INLINE
#elif defined(ZODIAC_COMPILER_PGI)
/// Force inline specification for the Portland Group compiler.
#   define ZDC_FORCE_INLINE __attribute__((always_inline)) ZDC_INLINE
#elif defined(ZODIAC_COMPILER_TI)
/// Force inline specification for the Texas Instruments compiler.
#   define ZDC_FORCE_INLINE __attribute__((always_inline)) ZDC_INLINE
#else
/// Force inline not supported indicator.
#   define ZDC_FORCE_INLINE_NOT_SUPPORTED
/// Default to regular inline if force inline is not supported.
#   define ZDC_FORCE_INLINE ZDC_INLINE
#endif

#endif // ZODIAC_PLATFORM_COMPILER_SPECIFIERS_H
