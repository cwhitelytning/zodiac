/**
 *  @file platform_callback_sender.h
 *  Defines an abstract callback sender type for the Zodiac library.
 */
#ifndef ZODIAC_PLATFORM_CALLBACK_SENDER_H
#define ZODIAC_PLATFORM_CALLBACK_SENDER_H

/**
 * @brief Type definition for a generic callback sender handle
 *
 * This type is used throughout the Zodiac library to reference objects
 * that act as sources of callbacks without specifying the underlying
 * implementation details.
 */
#define callback_sender void*

/**
 * @brief Alias for callback_sender to provide a more type-safe feel.
 *
 * Through typedef, `callback_sender_t` is interchangeable with `void*`,
 * allowing seamless casting but providing better code semantics for maintainability.
 */
typedef callback_sender callback_sender_t;

#endif // ZODIAC_PLATFORM_CALLBACK_SENDER_H
