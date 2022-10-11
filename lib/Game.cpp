#include "../include/Game.h"

Game::Game()
{
   cpuBoard = new Board();
   playerBoard = new Board(); 
}

Game::~Game()
{
    delete cpuBoard;
    delete playerBoard;
}

void Game::start()
{
    playerBoard->print();
}