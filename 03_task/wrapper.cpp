#include "wrapper.h"
Wrapper_x::Wrapper_x(const std::string& s) {
    str = TrackedString(s);
}
Wrapper_xy::Wrapper_xy(const std::string& s) : str(s) {}