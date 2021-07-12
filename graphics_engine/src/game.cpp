#include <Graphics_Engine_Config.h>
#ifndef GAME_SRC
#define GAME_SRC
#include <game.h>
#include <iostream>
#include <assert.h>
#endif //GAME_SRC

Game::Game(/* args */)
{
}

Game::~Game()
{
}

bool Game::runs()
{
    return game_on;
}

void Game::turn_off()
{
    std::cout << "Thanks for playing" << std::endl;
    game_on = false;
}

#ifdef RUN_TESTS
//tests for game class
void Game::test()
{

    {
        Game test_game;
        assert(test_game.runs());
        test_game.turn_off();
        assert(not test_game.runs());
    }
}
#endif //run_tests
