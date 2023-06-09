#include "World.hpp"

World::World
(
    std::shared_ptr<IMap> map,
    std::shared_ptr<IPlayer> player    
)
: isDead(false)
{
    this->map = map;
    this->player = player;
}

World::~World()
{

}

std::shared_ptr<IMap> World::getMap()
{
    return map;
}

std::shared_ptr<IPlayer> World::getPlayer()
{
    return player;
}

bool World::checkIfDead()
{
    return isDead;
}

void World::makeDead()
{
    isDead = true;
}