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

void Game::start()
{
    while( ! world->checkIfDead()){
        std::shared_ptr<std::vector<std::shared_ptr<IEvent>>> events = window->getEvents();
        for (std::shared_ptr<IEvent> event : *events)
        {
            event->affectWorld(world);
        }
        window->drawWorld(world);
    }
}