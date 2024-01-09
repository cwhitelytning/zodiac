#include <zodiac/runtime/runtime_logger.h>

logger_t runtime_logger;

void console_log(callback_sender_t sender, logger_level_t logger_level, const char* message) {
    // TODO: implement console logging
}

int main(void)
{
    logger_init(&runtime_logger, nullptr, console_log);
	return 0;
}