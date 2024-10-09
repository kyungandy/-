#ifndef GAMBLINGGAME_H
#define GAMBLINGGAME_H

#include "Player.h"

class GamblingGame {
    Player* players[2];
public:
    GamblingGame(); 
    ~GamblingGame(); 
    void start(); 
};

#endif
