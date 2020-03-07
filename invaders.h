#include "gameobject.h"

#ifndef INVADERS_H
#define INVADERS_H

enum Direction
{
    left, righr, up, down
};

class Invaders : public GameObject
{
public:
    Invaders();
    void Move();
    void SetDir(Direction d);
private:
    Direction curr;


};

#endif // INVADERS_H
