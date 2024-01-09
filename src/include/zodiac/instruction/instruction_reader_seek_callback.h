/**
 * @file instruction_reader_seek_callback.h
 * @brief Defines a callback for seeking within an instruction stream and related seek modes.
 *
 * This file details the callback used to seek within a stream of instructions,
 * as well as the enumerated types that describe the seek mode.
 */

#ifndef ZODIAC_INSTRUCTION_READER_SEEK_CALLBACK_H
#define ZODIAC_INSTRUCTION_READER_SEEK_CALLBACK_H

#include "instruction_reader_offset.h" ///< Include types related to instruction reader offset.

/**
 * @enum instruction_reader_seek_mode_e
 * @brief Enumeration of seek modes for use with instruction reader seek operations.
 *
 * This enum defines possible positions from which to apply an offset when seeking
 * within an instruction stream. The modes are based on typical file seeking behavior,
 * specifying the beginning, current position, or end of the stream as reference points.
 */
typedef enum instruction_reader_seek_mode_e {
    INSTRUCTION_READER_SEEK_SET, ///< Seek from the beginning of the instruction stream.
    INSTRUCTION_READER_SEEK_CUR, ///< Seek from the current position in the instruction stream.
    INSTRUCTION_READER_SEEK_END, ///< Seek from the end of the instruction stream.
} instruction_reader_seek_mode_t;

/**
 * @typedef instruction_reader_seek_callback_t
 * @brief Function pointer type for a seek callback within an instruction stream.
 *
 * This function pointer is used as a callback to change the current position in an
 * instruction stream. The function is expected to use the specified mode to set a
 * new position based on the given offset.
 *
 * @param sender The context from which the callback is being invoked.
 * @param offset The number of bytes to seek from the position specified by the mode.
 * @param mode The seek mode that determines from which position the offset is applied.
 */
typedef void (*instruction_reader_seek_callback_t)
        (callback_sender sender, instruction_reader_offset_t offset,
         instruction_reader_seek_mode_t mode);

#endif // ZODIAC_INSTRUCTION_READER_SEEK_CALLBACK_H
