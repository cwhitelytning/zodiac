/**
 * @file instruction_reader_read_callback.h
 * @brief Defines callbacks and errors for reading instructions.
 *
 * This file contains definitions for the callback function used when reading
 * instructions and the possible errors that can occur during the reading process.
 */

#ifndef ZODIAC_INSTRUCTION_READER_READ_CALLBACK_H
#define ZODIAC_INSTRUCTION_READER_READ_CALLBACK_H

#include "instruction.h"  ///< Include the definition for instruction_t

/**
 * @enum instruction_reader_read_error_e
 * @brief Enumerates possible errors that can occur when reading instructions.
 *
 * This enumeration defines the error codes that may result from attempting to read
 * an instruction. These codes are used to indicate success or specific kinds of failures.
 */
typedef enum instruction_reader_read_error_e {
    INSTRUCTION_READER_READ_ERROR_OK,         ///< No error occurred, instruction read successfully.
    INSTRUCTION_READER_READ_ERROR_HEADER,     ///< Error occurred while reading the instruction header.
    INSTRUCTION_READER_READ_ERROR_OPERANDS    ///< Error occurred while reading the instruction operands.
} instruction_reader_read_error_t;

/**
 * @typedef instruction_reader_read_callback_t
 * @brief Function pointer type for the callback used for reading instructions.
 *
 * Defines a function pointer type for callbacks used by an instruction reader. The
 * callback is expected to take a sender context and a pointer to an instruction, and
 * it returns an error code indicative of the read operation's result.
 *
 * @param[in] sender The context from which the callback is being invoked.
 * @param[out] instruction Pointer to an instruction where the read data is to be stored.
 * @return Returns a value of instruction_reader_read_error_t indicating the result of the read operation.
 */
typedef instruction_reader_read_error_t (*instruction_reader_read_callback_t)
        (callback_sender sender, instruction_t *instruction);

#endif // ZODIAC_INSTRUCTION_READER_READ_CALLBACK_H
