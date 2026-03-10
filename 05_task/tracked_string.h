#pragma once
#include <string>
#include "logger.h"

class TrackedString {
public:
    TrackedString();
    TrackedString(const std::string& s);
    TrackedString(const char* s);
    TrackedString(const TrackedString& x);
    friend std::ostream& operator<<(std::ostream& out, const TrackedString& s);
    friend bool operator==(const TrackedString& a, const TrackedString& b);
    friend bool operator!=(const TrackedString& a, const TrackedString& b);
    friend bool operator<(const TrackedString& a, const TrackedString& b);
    friend TrackedString operator+(const TrackedString& a, const TrackedString& b);
    TrackedString& operator=(const TrackedString& other);

private:
    std::string value;
    int id;
    static int count;
};