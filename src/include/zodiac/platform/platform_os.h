/**
 * @file platform_os.h
 * @brief Defines macros for detecting the operating system.
 *
 * This header file contains preprocessor directives that define macros
 * indicating the platform or operating system the code is being compiled on.
 * Each section checks for specific predefined macros that are typically set
 * by the compiler to indicate the current OS environment.
 */

#ifndef ZODIAC_PLATFORM_OS_H
#define ZODIAC_PLATFORM_OS_H

// Windows platforms (either 32-bit or 64-bit)
#if defined(_WIN32) || defined(_WIN64)
#   define ZODIAC_PLATFORM_WINDOWS // Windows OS

// Apple platforms; also check if it's for iOS or macOS
#elif defined(__APPLE__) && defined(__MACH__)
#   include <TargetConditionals.h>
#   if TARGET_OS_IPHONE
#       define ZODIAC_PLATFORM_IOS // Apple iOS
#   elif TARGET_OS_MAC
#       define ZODIAC_PLATFORM_MACOS // Apple macOS
#   endif

// Linux OS
#elif defined(__linux__)
#   define ZODIAC_PLATFORM_LINUX // Linux OS

// Android OS
#elif defined(__ANDROID__)
#   define ZODIAC_PLATFORM_ANDROID // Android OS

// FreeBSD OS
#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
#   define ZODIAC_PLATFORM_FREEBSD // FreeBSD OS

// NetBSD OS
#elif defined(__NetBSD__)
#   define ZODIAC_PLATFORM_NETBSD // NetBSD OS

// OpenBSD OS
#elif defined(__OpenBSD__)
#   define ZODIAC_PLATFORM_OPENBSD // OpenBSD OS

// Solaris OS
#elif defined(__sun) && defined(__SVR4)
#   define ZODIAC_PLATFORM_SOLARIS // Solaris OS

// IBM AIX OS
#elif defined(_AIX)
#   define ZODIAC_PLATFORM_AIX // AIX OS

// HP-UX OS
#elif defined(__hpux)
#   define ZODIAC_PLATFORM_HPUX // HP-UX OS

// DragonFly BSD OS
#elif defined(__dragonfly__)
#   define ZODIAC_PLATFORM_DRAGONFLY // DragonFly BSD OS

// OpenVMS OS
#elif defined(__VMS)
#   define ZODIAC_PLATFORM_VMS // VMS OS

// QNX OS
#elif defined(__QNX__) || defined(__QNXNTO__)
#   define ZODIAC_PLATFORM_QNX // QNX OS

// BSD/OS
#elif defined(__bsdi__)
#   define ZODIAC_PLATFORM_BSDI // BSD/OS

// SVR4 (System V Release 4) Unix-derived OS
#elif defined(_SYSTYPE_SVR4)
#   define ZODIAC_PLATFORM_SVR4 // System V Release 4

// RISC OS
#elif defined(__riscos)
#   define ZODIAC_PLATFORM_RISCOS // RISC OS

// SINIX OS
#elif defined(__sinix__)
#   define ZODIAC_PLATFORM_SINIX // SINIX OS

// System/390 - Commonly associated with IBM mainframes
#elif defined(__s390__) || defined(__s390x__)
#   define ZODIAC_PLATFORM_SYSTEMZ // System Z (IBM mainframe)

// Fuchsia OS (developed by Google)
#elif defined(__Fuchsia__)
#   define ZODIAC_PLATFORM_FUCHSIA // Fuchsia OS

// Haiku OS (an open-source OS that specifically targets personal computing)
#elif defined(__HAIKU__)
#   define ZODIAC_PLATFORM_HAIKU // Haiku OS

// Multiple Virtual Storage (used by z/OS)
#elif defined(__MVS__)
#   define ZODIAC_PLATFORM_MVS // MVS OS

// TOS MVS (MVS on a variant of Theos Operating System)
#elif defined(__TOS_MVS__)
#   define ZODIAC_PLATFORM_TOS_MVS // TOS MVS

// TOS OS/390 (IBM OS/390 on Theos)
#elif defined(__TOS_OS390__)
#   define ZODIAC_PLATFORM_TOS_OS390 // TOS OS/390

// OS/400 (an IBM operating system for its AS/400 line)
#elif defined(__OS400__)
#   define ZODIAC_PLATFORM_OS400 // OS/400

// Integrity OS (a real-time operating system produced by Green Hills Software)
#elif defined(__INTEGRITY)
#   define ZODIAC_PLATFORM_INTEGRITY // Integrity OS

// LynxOS (a real-time operating system by Lynx Software Technologies)
#elif defined(__Lynx__)
#   define ZODIAC_PLATFORM_LYNX // Lynx OS

// Unicos OS (Cray Operating System)
#elif defined(_UNICOS)
#   define ZODIAC_PLATFORM_UNICOS // UNICOS OS

// Cray OS (operating system for Cray supercomputers)
#elif defined(_CRAY)
#   define ZODIAC_PLATFORM_CRAY // Cray OS

#else
#   error "Unknown operating system"

#endif

/**
 * @def ZODIAC_PLATFORM_UNIX_LIKE
 * This macro is defined when the target platform is Unix-like.
 *
 * It is used to enable Unix-specific features and code paths in the application
 * to ensure compatibility with Unix or Unix-like operating systems.
 *
 * It is defined only if __unix__ or __unix is predefined by the compiler,
 * which is a commonly used way to detect Unix-like environments.
 */
#if defined(__unix__) || defined(__unix)
#   define ZODIAC_PLATFORM_UNIX_LIKE
#endif

#endif // ZODIAC_PLATFORM_OS_H