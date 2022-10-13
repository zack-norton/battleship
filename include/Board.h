#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>

class Board
{
    public:
        Board();
        ~Board();

        void print();

        void randomizeShips();

    private:
        std::string** gameBoard;
        int shipCount;
};

#endif