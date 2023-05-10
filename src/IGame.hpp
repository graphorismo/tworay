#if !defined(IGAME)
#define IGAME

#include <memory>

#include "IWindow.hpp"
#include "IWorld.hpp"

class IGame
{
public:
    virtual std::shared_ptr<IWindow> getWindow() = 0;
    virtual std::shared_ptr<IWorld> getWorld() = 0;
    virtual void start() = 0;
};


#endif // IGAME
