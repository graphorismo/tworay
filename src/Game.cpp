#include "Game.hpp"

Game::Game
(
    std::shared_ptr<IWindow> window, 
    std::shared_ptr<IWorld> world
){
    this->window = window;
    this->world = world;
}

Game::~Game()
{

}

std::shared_ptr<IWindow> Game::getWindow()
{
    return window;
}

std::shared_ptr<IWorld> Game::getWorld()
{
    return world;
}

void Game::processSingleTick()
{
    //TODO
}