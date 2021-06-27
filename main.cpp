#include <iostream>
#include <Snake_Game_Config.h>

int main()
{
//while ci/cd system is running, this is executed
#ifdef RUN_TESTS
    test(); //run tests
#else
    //otherwise, the real code is running
    std::cout << "Hello, actual builds" << std::endl;
#endif
}