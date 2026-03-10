#include "logger.h"
#include <chrono>
#include <format>
Logger::Logger(const std::string& filename) {
    File.open(filename, std::ios::app);
}
Logger::~Logger() {
    if (File.is_open()) {
        File.close();
    }
}
Logger& Logger::getInstance(const std::string& filename) {
    static Logger instance(filename);
    return instance;
}
void Logger::setLevel(int level) {
    levellog = level;
}
std::string Logger::l_striing (const int level) {
    if (level == Level::ERROR)   return "ERROR";
    if (level == Level::WARNING) return "WARNING";
    if (level == Level::INFO)    return "INFO";
    return "DEBUG";
}
void Logger::log(const std::string& text, int level) {
    if (level >= levellog) {
        auto now = std::chrono::system_clock::now();
        std::string time_string = std::format("{:%Y-%m-%d %H:%M:%S}",
            std::chrono::floor<std::chrono::seconds>(now));
        File << "[" << time_string << "] ["
             << l_striing(level) << "] "
             << text << '\n';
    }
}
