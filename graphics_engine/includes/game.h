class Game
{
private:
    bool game_on = true;

public:
    bool runs();
    void turn_off();
    Game(/* args */);
    ~Game();
#ifdef RUN_TESTS
    static void test();
#endif
};
