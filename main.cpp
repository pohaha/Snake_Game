#include <iostream>
#include "test/test.h"

int main()
{
//while ci/cd system is running, this is executed
#ifdef TEST_SESSION
    test(); //run tests
#endif
//otherwise, the real code is running
#ifdef BUILD_SESSION
    std::cout << "Hello, actual builds" << std::endl;
#endif
}