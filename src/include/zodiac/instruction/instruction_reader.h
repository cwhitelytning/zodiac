/**
 * @file instruction_reader.h
 * @brief Defines the structure and functionalities for instruction reading operations.
 *
 * This file specifies the structure used for instruction reading, as well as the associated
 * initialization and read operations. Callbacks for read, seek, and tell operations are included
 * within this structure and can be set during the instruction reader's initialization.
 */

#ifndef ZODIAC_INSTRUCTION_READER_H
#define ZODIAC_INSTRUCTION_READER_H

#include "instruction_reader_read_callback.h"  // Callback for the read operation.
#include "instruction_reader_seek_callback.h"  // Callback for the seek operation.
#include "instruction_reader_tell_callback.h"  // Callback for the tell operation.

/**
 * @struct instruction_reader_s
 * @brief Structure that encapsulates state and callbacks for instruction reading.
 *
 * This structure holds state and pointers to callback functions necessary for
 * providing a pluggable instruction reading mechanism. The callbacks must adhere
 * to the specified function signatures and handle the reading, seeking, and
 * reporting of the current reading position within the stream of instructions.
 */
typedef struct instruction_reader_s {
    callback_sender sender;                           ///< Context object for the callbacks.
    instruction_reader_read_callback_t read_callback; ///< Callback function for reading instructions.
    instruction_reader_seek_callback_t seek_callback; ///< Callback function for seeking in the instruction stream.
    instruction_reader_tell_callback_t tell_callback; ///< Callback function for reporting the current position.
} instruction_reader_t;

/**
 * @brief Initializes an instruction reader with the specified callbacks.
 *
 * Sets up an instruction reader by attaching the provided context and callbacks for read, seek,
 * and tell operations. This allows the reader to perform these operations when interacting with
 * an instruction stream.
 *
 * @param[out] reader Pointer to the instruction reader structure to initialize.
 * @param[in] sender The context to pass to the callbacks.
 * @param[in] read_callback The function to call for reading instructions.
 * @param[in] seek_callback The function to call for seeking in the instruction stream.
 * @param[in] tell_callback The function to call for telling the current read position.
 */
void instruction_reader_init(instruction_reader_t *reader,
                             callback_sender sender,
                             instruction_reader_read_callback_t read_callback,
                             instruction_reader_seek_callback_t seek_callback,
                             instruction_reader_tell_callback_t tell_callback);

/**
 * @brief Reads an instruction using the reader's read callback.
 *
 * Invokes the reader's read callback to read the next instruction from the instruction stream.
 *
 * @param[in] reader Pointer to the instruction reader from which to read.
 * @param[out] instruction Pointer to the instruction structure to populate with read data.
 * @return instruction_reader_read_error_t Error code resulting from the read operation.
 */
instruction_reader_read_error_t instruction_reader_read(instruction_reader_t *reader,
                                                        instruction_t *instruction);

/**
 * @brief Seeks within the instruction stream using the reader's seek callback.
 *
 * Invokes the reader's seek callback to change the current read position within the instruction stream,
 * according to the specified offset and seek mode.
 *
 * @param[in,out] reader Pointer to the instruction reader with which to seek.
 * @param[in] offset Offset to apply from the seek mode's starting point.
 * @param[in] mode The seek mode defining the starting point for the offset.
 */
void instruction_reader_seek(instruction_reader_t *reader,
                             instruction_reader_offset_t offset,
                             instruction_reader_seek_mode_t mode);

/**
 * @brief Tells the current read position using the reader's tell callback.
 *
 * Invokes the reader's tell callback to report the current read position in
 * the instruction stream.
 *
 * @param[in] reader Pointer to the instruction reader to query.
 * @return The current offset in the instruction stream.
 */
instruction_reader_offset_t instruction_reader_tell(instruction_reader_t *reader);

#endif // ZODIAC_INSTRUCTION_READER_H
