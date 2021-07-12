class Game
{
private:
    bool game_on = true;

public:
    bool runs();
    void turn_off();
    Game(/* args */);
    ~Game();
    static bool test();
};
