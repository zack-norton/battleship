#include "../include/Board.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Board::Board()
{
    shipCount = 5;

    gameBoard = new std::string*[10];

    for(int i = 0; i < 10; i++)
    {
        gameBoard[i] = new std::string[10];
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            gameBoard[i][j] = " ";
        }
    }
}

Board::~Board()
{
    for(int i = 0; i < 10; i++)
    {
        delete [] gameBoard[i];
    }

    delete [] gameBoard;
}

void Board::randomizeShips()
{
    srand(time(nullptr));

    int startRow = rand() % 10;
    int startCol = rand() % 10;

    bool up = (startRow - 5) >= 0;
    bool down = (startRow + 5) < 10;
    bool left = (startCol - 5) >= 0;
    bool right = (startCol + 5) < 10;
    


}

void Board::print()
{
    std::cout << "- - - - - - - - - - - - - - - - - - - - -" << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << "| ";
        for(int j = 0; j < 10; j++)
        {
            std::cout << gameBoard[i][j]; 
            std::cout << " | "; 
        }
        std::cout << std::endl;
        std::cout << "- - - - - - - - - - - - - - - - - - - - -" << std::endl;
    }
}