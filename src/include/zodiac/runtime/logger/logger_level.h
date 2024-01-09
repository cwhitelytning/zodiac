/**
 * @file logger_level.h
 * @brief Defines log level enumeration for the Zodiac logging system.
 */
#ifndef ZODIAC_LOGGER_LEVEL_H
#define ZODIAC_LOGGER_LEVEL_H

/**
 * @enum logger_level_e
 * @brief Enum representing the different levels of logging.
 *
 * This enumeration provides various levels of log severity, ranging from debug,
 * which is the least severe, to emergency, which is the most severe.
 */
typedef enum logger_level_e {
    LOGGER_LEVEL_DEBUG,      /*!< @brief Debug level for detailed system information. */
    LOGGER_LEVEL_INFO,       /*!< @brief Informational level for general system information. */
    LOGGER_LEVEL_NOTICE,     /*!< @brief Notice level for normal but significant condition. */
    LOGGER_LEVEL_WARNING,    /*!< @brief Warning level for potential problems. */
    LOGGER_LEVEL_ERROR,      /*!< @brief Error level for error conditions. */
    LOGGER_LEVEL_CRITICAL,   /*!< @brief Critical level for critical conditions. */
    LOGGER_LEVEL_ALERT,      /*!< @brief Alert level for immediate action needed. */
    LOGGER_LEVEL_EMERGENCY   /*!< @brief Emergency level for severe conditions where the system is unusable. */
} logger_level_t;

/**
 * @brief Converts a logger_level_t to its string representation.
 *
 * This function takes a log level of type logger_level_t and returns a
 * human-readable null-terminated string corresponding to the provided
 * log level. This is useful for log output, debugging, or reporting purposes.
 *
 * @param level The log level to convert to a string.
 * @return A pointer to a string representing the name of the log level.
 */
const char *logger_level_to_string(logger_level_t level);

#endif // ZODIAC_LOGGER_LEVEL_H