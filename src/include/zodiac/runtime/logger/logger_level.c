#include "logger_level.h"

const char *logger_level_to_string(logger_level_t level) {
    switch (level) {
        case LOGGER_LEVEL_DEBUG:
            return "DEBUG";
        case LOGGER_LEVEL_INFO:
            return "INFO";
        case LOGGER_LEVEL_NOTICE:
            return "NOTICE";
        case LOGGER_LEVEL_WARNING:
            return "WARNING";
        case LOGGER_LEVEL_ERROR:
            return "ERROR";
        case LOGGER_LEVEL_CRITICAL:
            return "CRITICAL";
        case LOGGER_LEVEL_ALERT:
            return "ALERT";
        case LOGGER_LEVEL_EMERGENCY:
            return "EMERGENCY";
        default:
            return "UNKNOWN";
    }
}
