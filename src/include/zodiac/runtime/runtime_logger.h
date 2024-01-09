/**
 * @file runtime_logger.h
 * @brief Defines macros for logging within the application using a global runtime logger.
 *
 * This file defines a set of logging macros that are associated with a global logger instance.
 * These macros provide a convenient way to log messages at various levels throughout the application.
 */
#ifndef ZODIAC_RUNTIME_LOGGER_H
#define ZODIAC_RUNTIME_LOGGER_H

#include "logger/logger.h"
#include "logger/logger_log_level.h"

/**
 * @var runtime_logger
 * @brief Global runtime logger instance.
 *
 * This logger instance is designed to be used throughout the application to log messages.
 * It must be initialized before any logging macros are used.
 */
extern logger_t runtime_logger;

/**
 * @def RUNTIME_LOG_DEBUG
 * @brief Logs a DEBUG message using the global runtime logger.
 * @param message The message to be logged.
 */
#define RUNTIME_LOG_DEBUG(message) LOGGER_LOG_DEBUG(&runtime_logger, message)

/**
 * @def RUNTIME_LOG_INFO
 * @brief Logs an INFO message using the global runtime logger.
 * @param message The message to be logged.
 */
#define RUNTIME_LOG_INFO(message) LOGGER_LOG_INFO(&runtime_logger, message)

/**
 * @def RUNTIME_LOG_WARNING
 * @brief Logs a WARNING message using the global runtime logger.
 * @param message The message to be logged.
 */
#define RUNTIME_LOG_WARNING(message) LOGGER_LOG_WARNING(&runtime_logger, message)

/**
 * @def RUNTIME_LOG_ERROR
 * @brief Logs an ERROR message using the global runtime logger.
 * @param message The message to be logged.
 */
#define RUNTIME_LOG_ERROR(message) LOGGER_LOG_ERROR(&runtime_logger, message)

/**
 * @def RUNTIME_LOG_CRITICAL
 * @brief Logs a CRITICAL message using the global runtime logger.
 * @param message The message to be logged.
 */
#define RUNTIME_LOG_CRITICAL(message) LOGGER_LOG_CRITICAL(&runtime_logger, message)

/**
 * @def RUNTIME_LOG_ALERT
 * @brief Logs an ALERT message using the global runtime logger.
 * @param message The message to be logged.
 */
#define RUNTIME_LOG_ALERT(message) LOGGER_LOG_ALERT(&runtime_logger, message)

/**
 * @def RUNTIME_LOG_EMERGENCY
 * @brief Logs an EMERGENCY message using the global runtime logger.
 * @param message The message to be logged.
 */
#define RUNTIME_LOG_EMERGENCY(message) LOGGER_LOG_EMERGENCY(&runtime_logger, message)

#endif // ZODIAC_RUNTIME_LOGGER_H
