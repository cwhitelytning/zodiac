/**
 * @file instruction.h
 * @brief Definition of instruction-related types and structures for Zodiac.
 *
 * This header file defines the types and structures used to create and manage
 * instructions within the Zodiac system. An instruction is composed of an instruction
 * header, which includes controller and operation indices, and a set of operands.
 * The exact definition and usage of controller and operation indices are determined
 * by the Zodiac platform's requirements.
 */

#ifndef ZODIAC_INSTRUCTION_H
#define ZODIAC_INSTRUCTION_H

#include "../platform/platform.h"  ///< Include the platform abstraction layer

/**
 * @brief Controller index type definition.
 * Represents an index to select one of several possible controllers in the system.
 */
typedef uint8_t controller_index_t;

/**
 * @brief Operation index type definition.
 * Represents the operation to be performed by the controller specified by the
 * controller_index within an instruction header.
 */
typedef uint8_t operation_index_t;

/**
 * @brief Operands length type definition.
 * Represents the length or count of operands that follow in an instruction.
 */
typedef uint8_t operands_length_t;

/**
 * @brief Structure that defines the instruction header of an instruction.
 * This header contains the indices required to identify the instruction and
 * the length of operands that this operation takes.
 */
typedef struct instruction_header_s {
    controller_index_t controller_index;    ///< Index of the controller
    operation_index_t operation_index;      ///< Index of the operation to be performed
    operands_length_t number_of_operands;   ///< Number of operands following the header
} instruction_header_t;

/**
 * @brief Instruction operand type definition.
 * Represents a single operand in an instruction. The exact meaning and size of the
 * operand are defined by the controller that interprets it.
 */
typedef uint8_t instruction_operand_t;

/**
 * @brief Max number of instruction operands.
 * Defines the maximum number of operands that an instruction can have. This
 * is used to size the array of operands in the instruction structure.
 */
#define MAX_NUMBER_OF_INSTRUCTION_OPERANDS 256

/**
 * @brief Instruction operands type definition.
 * Defines an array type that can hold the maximum number of operands defined
 * by MAX_NUMBER_OF_INSTRUCTION_OPERANDS.
 */
typedef instruction_operand_t instruction_operands_t[MAX_NUMBER_OF_INSTRUCTION_OPERANDS];

/**
 * @brief Structure that defines an instruction.
 * An instruction consists of an instruction header and a set of operands. The operands
 * are stored in an array sized to the maximum number of operands allowed.
 */
typedef struct instruction_s {
    instruction_header_t header;        ///< Instruction header component of the instruction
    instruction_operands_t operands;    ///< Operands of the instruction
} instruction_t;

#endif // ZODIAC_INSTRUCTION_H
