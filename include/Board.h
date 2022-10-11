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
    private:
        std::string** gameBoard;
};

#endif