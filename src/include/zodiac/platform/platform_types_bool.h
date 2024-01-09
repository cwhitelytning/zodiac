/**
 * @file
 * Defines a platform-independent boolean type.
 *
 * Since standard C (C89/C90) does not have a built-in boolean type, this
 * header file introduces a custom bool type to be used for boolean logic.
 * It defines 'false' and 'true' as the two possible states of bool.
 */

#ifndef ZODIAC_PLATFORM_TYPE_BOOL_H
#define ZODIAC_PLATFORM_TYPE_BOOL_H

/**
 * @brief An enumeration for boolean values.
 *
 * This enumeration defines 'false' as 0 and 'true' as 1, providing a simple
 * boolean type for platforms that do not support the C99 `<stdbool.h>` definitions.
 */
typedef enum {
    false, /**< Represents the boolean value false. */
    true   /**< Represents the boolean value true. */
} bool;

#endif // ZODIAC_PLATFORM_TYPE_BOOL_H
