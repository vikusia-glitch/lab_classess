#include "tracked_string.h"
#include <iostream>

int main() {
    auto& logger = Logger::getInstance("../../logs/task_05.log");
    logger.setLevel(Logger::Level::DEBUG);
    TrackedString a("hello");
    TrackedString b("world");
    std::cout << a << " " << b << std::endl;
    auto c = a + b;
    return 0;
}