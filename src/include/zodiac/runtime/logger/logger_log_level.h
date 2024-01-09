/**
 * @file logger_log_level.h
 * @brief Defines convenience macros for logging at specific logger levels.
 *
 * This set of macros provides a simplified syntax for logging messages at various
 * severity levels by wrapping the `logger_log` function call. Each macro corresponds
 * to one of the predefined logger severity levels.
 */
#ifndef ZODIAC_LOGGER_LOG_LEVEL_H
#define ZODIAC_LOGGER_LOG_LEVEL_H

/**
 * @def LOGGER_LOG_DEBUG
 * @brief Log a message at the DEBUG level.
 * @param logger The logger to which the message should be logged.
 * @param message The message to be logged.
 */
#define LOGGER_LOG_DEBUG(logger, message) logger_log(logger, LOGGER_LEVEL_DEBUG, message)

/**
 * @def LOGGER_LOG_INFO
 * @brief Log a message at the INFO level.
 * @param logger The logger to which the message should be logged.
 * @param message The message to be logged.
 */
#define LOGGER_LOG_INFO(logger, message) logger_log(logger, LOGGER_LEVEL_INFO, message)

/**
 * @def LOGGER_LOG_NOTICE
 * @brief Log a message at the NOTICE level.
 * @param logger The logger to which the message should be logged.
 * @param message The message to be logged.
 */
#define LOGGER_LOG_NOTICE(logger, message) logger_log(logger, LOGGER_LEVEL_NOTICE, message)

/**
 * @def LOGGER_LOG_WARNING
 * @brief Log a message at the WARNING level.
 * @param logger The logger to which the message should be logged.
 * @param message The message to be logged.
 */
#define LOGGER_LOG_WARNING(logger, message) logger_log(logger, LOGGER_LEVEL_WARNING, message)

/**
 * @def LOGGER_LOG_ERROR
 * @brief Log a message at the ERROR level.
 * @param logger The logger to which the message should be logged.
 * @param message The message to be logged.
 */
#define LOGGER_LOG_ERROR(logger, message) logger_log(logger, LOGGER_LEVEL_ERROR, message)

/**
 * @def LOGGER_LOG_CRITICAL
 * @brief Log a message at the CRITICAL level.
 * @param logger The logger to which the message should be logged.
 * @param message The message to be logged.
 */
#define LOGGER_LOG_CRITICAL(logger, message) logger_log(logger, LOGGER_LEVEL_CRITICAL, message)

/**
 * @def LOGGER_LOG_ALERT
 * @brief Log a message at the ALERT level.
 * @param logger The logger to which the message should be logged.
 * @param message The message to be logged.
 */
#define LOGGER_LOG_ALERT(logger, message) logger_log(logger, LOGGER_LEVEL_ALERT, message)

/**
 * @def LOGGER_LOG_EMERGENCY
 * @brief Log a message at the EMERGENCY level.
 * @param logger The logger to which the message should be logged.
 * @param message The message to be logged.
 */
#define LOGGER_LOG_EMERGENCY(logger, message) logger_log(logger, LOGGER_LEVEL_EMERGENCY, message)

#endif // ZODIAC_LOGGER_LOG_LEVEL_H
