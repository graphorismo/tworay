#if !defined(IEVENT)
#define IEVENT

#include "../IWorld.hpp"

class IEvent
{
public:
    virtual void affectWorld(std::shared_ptr<IWorld> world) = 0;
};

#endif // IEVENT
