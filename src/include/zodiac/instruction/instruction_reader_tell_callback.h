/**
 * @file instruction_reader_tell_callback.h
 * @brief Defines the callback used for obtaining the current position in an instruction stream.
 *
 * This file contains the definition for the callback that readers of instruction streams
 * will use to tell (report) the current position within the stream.
 */

#ifndef ZODIAC_INSTRUCTION_READER_TELL_CALLBACK_H
#define ZODIAC_INSTRUCTION_READER_TELL_CALLBACK_H

#include "instruction_reader_offset.h" ///< Include the definition of instruction_reader_offset_t.

/**
 * @typedef instruction_reader_tell_callback_t
 * @brief Function pointer type for a callback to report the current read position.
 *
 * This typedef defines a function pointer type for a callback function that, when invoked,
 * will return the current position in the instruction stream. This is typically used
 * to determine how much of the stream has been read or to support seek operations.
 *
 * @param[in] sender The context from which the callback is being invoked.
 * @return The current offset in the instruction stream.
 */
typedef instruction_reader_offset_t (*instruction_reader_tell_callback_t)
        (callback_sender sender);

#endif // ZODIAC_INSTRUCTION_READER_TELL_CALLBACK_H
