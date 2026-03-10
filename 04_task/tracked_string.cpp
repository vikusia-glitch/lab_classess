#include "tracked_string.h"
#include <format>

int TrackedString::count = 0;

TrackedString::TrackedString(const std::string& s) : id(++count), value(s) {
    Logger::getInstance("../../logs/task_04.log").log(
        std::format("[string ctor] id={} this={}", id, static_cast<void*>(this)),
        Logger::Level::INFO);
}

TrackedString::TrackedString() : TrackedString("") {
    Logger::getInstance("../../logs/task_04.log").log(
        std::format("[default ctor delegated] id={} this={}", id, static_cast<void*>(this)),
        Logger::Level::INFO);
}
TrackedString::TrackedString(const char* s) : TrackedString(std::string(s)) {
    Logger::getInstance("../../logs/task_04.log").log(
        std::format("[char* ctor delegated] id={} this={}", id, static_cast<void*>(this)),
        Logger::Level::INFO);
}

TrackedString::TrackedString(const TrackedString& x) : id(++count), value(x.value) {
    Logger::getInstance("../../logs/task_04.log").log(
        std::format("[copy ctor] id={} this={} from id={}", id, static_cast<void*>(this), x.id),
        Logger::Level::INFO);
}

