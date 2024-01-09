/**
 * @file instruction_reader_offset.h
 * @brief Definition of the instruction reader offset type.
 *
 * This header defines the `instruction_reader_offset_t` type, which is used to represent
 * offsets within a stream or buffer of instructions. It is an alias for the `ssize_t` type,
 * which typically signifies a signed size capable of holding either the size of an object
 * in bytes or a negative error code.
 */

#ifndef ZODIAC_INSTRUCTION_READER_OFFSET_H
#define ZODIAC_INSTRUCTION_READER_OFFSET_H

#include "../platform/platform.h"  ///< Include platform-specific configurations and types.

/**
 * @typedef instruction_reader_offset_t
 * @brief Alias for ssize_t representing an offset within instruction streams.
 *
 * This type is used to indicate offsets in an instruction reader, which may need to
 * support both forward and backward movements, including negative values to
 * represent movements in the reverse direction or errors.
 */
typedef ssize_t instruction_reader_offset_t;

#endif // ZODIAC_INSTRUCTION_READER_OFFSET_H