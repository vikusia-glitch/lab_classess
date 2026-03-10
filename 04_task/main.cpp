#include "tracked_string.h"

int main() {
    auto& logger = Logger::getInstance("../../logs/task_04.log");
    logger.setLevel(Logger::Level::DEBUG);
    TrackedString x;
    TrackedString y("test");
    return 0;
}