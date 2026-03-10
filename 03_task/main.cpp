#include "wrapper.h"
int main() {
    Logger::getInstance("../../logs/log3_a.log").setLevel(Logger::Level::DEBUG);
    Wrapper_x wx("Hello");
    return 0;
}
//int main() {
   //Logger::getInstance("../../logs/log3_b.log").setLevel(Logger::Level::DEBUG);
    //Wrapper_xy wxy("hello");
    //return 0;
//}

//чтобы запустить вариант со списком инициализации нужно закомментировать 1 мейн и раскомментировать второй мейн(запустить его)