#include "logger.h"

void logger_init(logger_t *logger, callback_sender_t sender, logger_log_callback_t log_callback) {
    logger->sender = sender;
    logger->log_callback = log_callback;
}

void logger_log(logger_t *logger, logger_level_t logger_level, const char *message) {
    logger->log_callback(logger->sender, logger_level, message);
}
