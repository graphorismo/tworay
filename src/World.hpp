#if !defined(WORLD)
#define WORLD

#include <memory>

#include "IWorld.hpp"

class World : public IWorld
{
private:
    std::shared_ptr<IMap> map;
    std::shared_ptr<IPlayer> player;

public:

    World
    (
        std::shared_ptr<IMap> map,
        std::shared_ptr<IPlayer> player    
    );

    ~World();

    virtual std::shared_ptr<IMap> getMap() override;
    virtual std::shared_ptr<IPlayer> getPlayer() override;
};

#endif // WORLD
