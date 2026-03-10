#pragma once
#include <string>
#include "tracked_string.h"
class Wrapper_x {
public:
    Wrapper_x(const std::string& s);
private:
    TrackedString str;
};
class Wrapper_xy {
public:
    Wrapper_xy(const std::string& s);
private:
    TrackedString str;
};
