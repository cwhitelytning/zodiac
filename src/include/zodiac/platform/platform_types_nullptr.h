/**
 * @file platform_type_nullptr.h
 * @brief Defines a macro to introduce a 'nullptr' keyword in C.
 *
 * This header file defines a macro to mimic the C++11 keyword 'nullptr' in C.
 * This can be useful for codebases that wish to use a more C++-like syntax for
 * null pointers while maintaining compatibility with C.
 */
#ifndef ZODIAC_PLATFORM_TYPE_NULLPTR_H
#define ZODIAC_PLATFORM_TYPE_NULLPTR_H

/**
 * @def nullptr
 * @brief A macro that defines the 'nullptr' keyword as a null pointer for C code.
 *
 * The 'nullptr' is defined as a cast of 0 to void pointer, which is traditionally
 * the way to represent a null pointer constant in C. In C++, 'nullptr' is a
 * built-in keyword that serves a similar purpose but also provides type safety
 * over NULL or 0 in pointer contexts.
 */
#define nullptr ((void*)0)

#endif // ZODIAC_PLATFORM_TYPE_NULLPTR_H
