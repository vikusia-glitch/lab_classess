#pragma once
#pragma once
#include <string>
#include <fstream>
#include <chrono>
#include <format>

class Logger {
public:
    struct Level {
        static const int DEBUG = 0;
        static const int INFO = 1;
        static const int WARNING = 2;
        static const int ERROR = 3;
    };
    static Logger& getInstance(const std::string& filename);
    void log(const std::string& text, int level);
    void setLevel(int level);
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
private:
    std::ofstream File;
    int levellog = Level::DEBUG;
    Logger(const std::string& filename);
    ~Logger();
    static std::string l_striing (const int level);
};