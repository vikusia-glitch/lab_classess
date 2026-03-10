#pragma once
#include <string>
#include "logger.h"
class TrackedString {
public:
    TrackedString();
    TrackedString(const std::string& s);
    TrackedString(const char* s);
    TrackedString(const TrackedString& x);
private:
    std::string value;
    int id;
    static int count;
};