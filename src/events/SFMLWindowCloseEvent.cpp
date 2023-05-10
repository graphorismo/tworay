#include "SFMLWindowCloseEvent.hpp"

void SFMLWindowCloseEvent::affectWorld(std::shared_ptr<IWorld> world){
    world->makeDead();
}