#if !defined(IWINDOW)
#define IWINDOW

#include <memory>
#include <vector>

#include "events/IEvent.hpp"
#include "IWorld.hpp"

class IWindow
{
public:
    virtual int getWidth() = 0;
    virtual int getHeight() = 0;
    virtual void close() = 0;
    virtual std::shared_ptr<std::vector<std::shared_ptr<IEvent>>> getEvents() = 0;
    virtual void drawWorld(std::shared_ptr<IWorld> world) = 0;
};

#endif // IWINDOW
