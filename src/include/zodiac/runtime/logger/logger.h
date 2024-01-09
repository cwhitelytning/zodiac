/**
 * @file logger.h
 * @brief Provides logging functionality for the Zodiac system.
 *
 * This file defines the callback mechanism for logging messages and contains
 * the initialization and logging interfaces for the Zodiac logger. It allows
 * registering a logger callback and using the logger to output messages at
 * different severity levels.
 */
#ifndef ZODIAC_LOGGER_H
#define ZODIAC_LOGGER_H

#include "../../platform/platform.h"
#include "logger_level.h"

/**
 * @typedef logger_log_callback_t
 * @brief Type definition for a logging callback function.
 *
 * This type represents a pointer to a function that will be called by the
 * logger system whenever a message needs to be logged. The callback function
 * receives the source of the callback, the severity level of the message, and
 * the message itself.
 *
 * @param sender The originator of the log message.
 * @param logger_level The severity level of the message being logged.
 * @param message The message string to log.
 */
typedef void(*logger_log_callback_t)(callback_sender_t sender, logger_level_t logger_level, const char *message);

/**
 * @struct logger_s
 * @brief Represents a logger with a callback for logging messages.
 *
 * This structure is used for maintaining the state of a logger, including
 * its source (sender) and the associated callback function that performs
 * the actual logging.
 */
typedef struct logger_s {
    callback_sender_t sender;             /*!< The source associated with the logger */
    logger_log_callback_t log_callback;   /*!< The callback function for logging messages */
} logger_t;

/**
 * @brief Initializes the logger with a provided sender and log callback function.
 *
 * @param logger Pointer to the logger to initialize.
 * @param sender Instance of the sender to associate this logger with.
 * @param log_callback The function to be called when a log message is generated.
 */
void logger_init(logger_t *logger, callback_sender_t sender, logger_log_callback_t log_callback);

/**
 * @brief Logs a message with a specified severity level.
 *
 * This function will call the registered logging callback (if any) with
 * the specified logger, level, and message.
 *
 * @param logger Pointer to the logger to use for the log message.
 * @param logger_level The severity level of the log message.
 * @param message The message string to log.
 */
void logger_log(logger_t *logger, logger_level_t logger_level, const char *message);

#endif // ZODIAC_LOGGER_H
