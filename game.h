#include "gamer.h"
#include "bullet.h"
#include "invaders.h"
#include "vector"
#ifndef GAME_H
#define GAME_H


class Game
{
public:
    Game();
private:
    Gamer gamer;
    std::vector<Invaders> enemies;
    std::vector<Bullet> bullets;
    int ac;
    int enemNum;
};

#endif // GAME_H
