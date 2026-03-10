#include "logger.h"
int main() {
    auto& logger = Logger::getInstance("../../logs/task_01.log");
    logger.setLevel(Logger::Level::DEBUG);
    logger.log("мяу", Logger::Level::INFO);
    logger.log("отладка мяу", Logger::Level::DEBUG);
    logger.log("МЯУ", Logger::Level::WARNING);
    logger.log("не мяу...", Logger::Level::ERROR);

    return 0;

}
