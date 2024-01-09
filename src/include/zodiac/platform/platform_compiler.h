/**
 * @file platform_compiler.h
 * @brief Defines macros for identifying the compiler in use and setting up
 *        platform-specific compiler settings or workarounds.
 */

#ifndef ZODIAC_PLATFORM_COMPILER_H
#define ZODIAC_PLATFORM_COMPILER_H

#if defined(__TI_COMPILER_VERSION__)
#   define ZODIAC_COMPILER_TI                       ///< Defined if using Texas Instruments compiler
#elif defined(__TURBOC__)
#   define ZODIAC_COMPILER_TURBO                    ///< Defined if using Turbo C++
#elif defined(__BORLANDC__)
#   define ZODIAC_COMPILER_BORLAND                  ///< Defined if using Borland C++
#elif defined(__WATCOMC__)
#   define ZODIAC_COMPILER_WATCOM                   ///< Defined if using Watcom C
#elif defined(__PGI)
#   define ZODIAC_COMPILER_PGI                      ///< Defined if using Portland Group C/C++
#elif defined(_CRAYC)
#   define ZODIAC_COMPILER_CRAY                     ///< Defined if using Cray compiler family
#elif defined(__ADSPBLACKFIN__) || defined(__ADSPTS__) || defined(__ADSP21000__)
#   define ZODIAC_COMPILER_ADSP                     ///< Defined if using Analog Devices VisualDSP++ compiler
#elif defined(__IAR_SYSTEMS_ICC__)
#   define ZODIAC_COMPILER_IAR                      ///< Defined if using IAR Systems compiler
#elif defined(__SDCC_VERSION_MAJOR)
#   define ZODIAC_COMPILER_SDCC                     ///< Defined if using Small Device C Compiler (SDCC)
#elif defined(__DCC__)
#   define ZODIAC_COMPILER_DIAB                     ///< Defined if using Wind River Diab C/C++ Compiler.
#elif defined(__EMSCRIPTEN__)
#   define ZODIAC_COMPILER_EMSCRIPTEN               ///< Defined if using Emscripten compiler
#elif defined(__llvm__)
#   define ZODIAC_COMPILER_LLVM                     ///< Defined if using LLVM compiler infrastructure instead of a specific frontend
#elif defined(__CC_ARM) || defined(__ARMCC_VERSION)
#   define ZODIAC_COMPILER_ARM                      ///< Defined if using ARM's compilers
#elif defined(__KEIL__)
#   define ZODIAC_COMPILER_KEIL                     ///< Defined if using KEIL ARM Compilers.
#elif defined(__MINGW32__)
#   define ZODIAC_COMPILER_MINGW32                  ///< Defined if using MinGW-w64 for Windows 32-bit
#elif defined(__MINGW64__)
#   define ZODIAC_COMPILER_MINGW64                  ///< Defined if using MinGW-w64 for Windows 64-bit
#elif defined(__CYGWIN__)
#   define ZODIAC_COMPILER_CYGWIN                   ///< Defined if using Cygwin environment for GNU tools on Windows.
#elif defined(__INTEL_COMPILER) || defined(__ICC)
#   define ZODIAC_COMPILER_INTEL                    ///< Defined if using Intel C++ compiler
#elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
#   define ZODIAC_COMPILER_SOLARIS                  ///< Defined if using Oracle Developer Studio
#elif defined(__HP_cc) || defined(__HP_aCC)
#   define ZODIAC_COMPILER_HP                       ///< Defined if using HP C++/ANSI C
#elif defined(__IBMCPP__)
#   define ZODIAC_COMPILER_IBM                      ///< Defined if using IBM XL C/C++
#elif defined(__APPLE_CC__)
#   define ZODIAC_COMPILER_APPLE                    ///< Defined if using Apple C compiler
#elif defined(_MSC_VER)
#   define ZODIAC_COMPILER_MSVC                     ///< Defined if using Microsoft Visual C/C++
#elif defined(__clang__)
#   define ZODIAC_COMPILER_CLANG                    ///< Defined if using the Clang/LLVM compiler
#elif defined(__GNUC__) || defined(__GNUG__)
#   define ZODIAC_COMPILER_GCC                      ///< Defined if using GNU Compiler Collection (GCC)
#else
#   error "Unknown compiler"
#endif

#endif // ZODIAC_PLATFORM_COMPILER_H
