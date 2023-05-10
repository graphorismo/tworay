#if !defined(IWORLD)
#define IWORLD

#include <memory>

#include "IMap.hpp"
#include "IPlayer.hpp"

class IWorld
{
public:
    virtual std::shared_ptr<IMap> getMap() = 0;
    virtual std::shared_ptr<IPlayer> getPlayer() = 0;
    virtual bool checkIfDead() = 0;
    virtual void makeDead() = 0;
};

#endif // IWORLD
