#include "tracked_string.h"

int main() {
    auto& logger = Logger::getInstance("../../logs/task_02.log");
    logger.setLevel(Logger::Level::DEBUG);
    TrackedString a;
    TrackedString b("hello");
    std::string s = "world";
    TrackedString c(s);
    TrackedString d = c;
    return 0;

}