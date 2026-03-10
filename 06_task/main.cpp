#include "tracked_string.h"
#include <vector>
int main() {
    auto& logger = Logger::getInstance("../../logs/task_06.log");
    logger.setLevel(Logger::Level::DEBUG);
    std::vector<TrackedString> vec;
    vec.reserve(4);
    vec.push_back(TrackedString("temp"));
    TrackedString ts("str");
    vec.push_back(ts);
    vec.emplace_back("temp");
    vec.emplace_back(TrackedString("temp"));
    return 0;
}