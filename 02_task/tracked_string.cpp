#include "tracked_string.h"
#include <format>

int TrackedString::count = 0;
TrackedString::TrackedString() : id(++count) {
    Logger::getInstance("../../logs/task_02.log").log(
        std::format("[default ctor] id={} this={}", id, static_cast<void*>(this)),
        Logger::Level::INFO);
}

TrackedString::TrackedString(const std::string& s) : id(++count), value(s) {
    Logger::getInstance("../../logs/task_02.log").log(
        std::format("[string ctor] id={} this={}", id, static_cast<void*>(this)),
        Logger::Level::INFO);
}

TrackedString::TrackedString(const char* s) : id(++count), value(s) {
    Logger::getInstance("../../logs/task_02.log").log(
        std::format("[char* ctor] id={} this={}", id, static_cast<void*>(this)),
        Logger::Level::INFO);
}

TrackedString::TrackedString(const TrackedString& x) : id(++count), value(x.value) {
    Logger::getInstance("../../logs/task_02.log").log(
        std::format("[copy ctor] id={} this={} from id={}", id, static_cast<void*>(this), x.id),
        Logger::Level::INFO);
}
