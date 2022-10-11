#ifndef GAME_H
#define GAME_H

#include "Board.h"

class Game
{
    public:
        Game();
        ~Game();

        void start();
    private:
        Board* cpuBoard;
        Board* playerBoard;
};

#endif