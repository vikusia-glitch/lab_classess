#include "tracked_string.h"
#include <format>

int TrackedString::count = 0;

TrackedString::TrackedString() : id(++count) {
    Logger::getInstance("../../logs/task_06.log").log(std::format("[default ctor] id={} this={}", id, static_cast<void*>(this)),
        Logger::Level::INFO);
}

TrackedString::TrackedString(const std::string& s) : id(++count), value(s) {
    Logger::getInstance("../../logs/task_06.log").log(std::format("[string ctor] id={} this={}", id, static_cast<void*>(this)),
        Logger::Level::INFO);
}

TrackedString::TrackedString(const char* s) : id(++count), value(s) {
    Logger::getInstance("../../logs/task_06.log").log(std::format("[char* ctor] id={} this={}", id, static_cast<void*>(this)),
        Logger::Level::INFO);
}

TrackedString::TrackedString(const TrackedString& x) : id(++count), value(x.value) {
    Logger::getInstance("../../logs/task_06.log").log(std::format("[copy ctor] id={} this={} from id={}", id, static_cast<void*>(this), x.id),
        Logger::Level::INFO);
}

TrackedString::TrackedString(TrackedString&& hh) : id(++count), value(std::move(hh.value)) {
    Logger::getInstance("../../logs/task_06.log").log(std::format("[move ctor] id={} this={} from id={}", id, static_cast<void*>(this), hh.id),
        Logger::Level::INFO);
}

TrackedString& TrackedString::operator=(const TrackedString& other) {
    value = other.value;
    Logger::getInstance("../../logs/task_06.log").log(std::format("[operator=] id={} from id={}", id, other.id),
        Logger::Level::INFO);
    return *this;
}

std::ostream& operator<<(std::ostream& out, const TrackedString& s) {
    out << s.value;
    Logger::getInstance("../../logs/task_06.log").log(std::format("[operator<<] id={}", s.id),
        Logger::Level::INFO);
    return out;
}

bool operator==(const TrackedString& a, const TrackedString& b) {
    bool result = a.value == b.value;
    Logger::getInstance("../../logs/task_06.log").log(std::format("[operator==] id1={} id2={} result={}", a.id, b.id, result),
        Logger::Level::INFO);
    return result;
}

bool operator!=(const TrackedString& a, const TrackedString& b) {
    bool result = a.value != b.value;
    Logger::getInstance("../../logs/task_06.log").log(std::format("[operator!=] id1={} id2={} result={}", a.id, b.id, result),
        Logger::Level::INFO);
    return result;
}

bool operator<(const TrackedString& a, const TrackedString& b) {
    bool result = a.value < b.value;
    Logger::getInstance("../../logs/task_06.log").log(std::format("[operator<] id1={} id2={} result={}", a.id, b.id, result),
        Logger::Level::INFO);
    return result;
}

TrackedString operator+(const TrackedString& a, const TrackedString& b) {
    Logger::getInstance("../../logs/task_06.log").log(std::format("[operator+] id1={} id2={}", a.id, b.id),
        Logger::Level::INFO);
    return TrackedString(a.value + b.value);
}