#include <iostream>
#include <Snake_Game_Config.h>
#ifdef RUN_TESTS
#include <test.h>
#endif
#include <game.h>

int main()
{
//while ci/cd system is running, this is executed
#ifdef RUN_TESTS
    test(); //run tests
#else
    //otherwise, the real code is running
    Game New_Game; //New Game session

    while (New_Game.runs())
    {
        char control_key;
        std::cout << "input char:";
        std::cin >> control_key;
        if (control_key == 'x')
            New_Game.turn_off();
        //do stuff
    }
#endif
}