#include "../include/Board.h"
#include <iostream>

Board::Board()
{
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