#if !defined(SFMLWINDOWCLOSEEVENT)
#define SFMLWINDOWCLOSEEVENT

#include "IEvent.hpp"

class SFMLWindowCloseEvent : public IEvent{
public:
    virtual void affectWorld(std::shared_ptr<IWorld> world) override;
};


#endif // WINDOWCLOSEEVENT
