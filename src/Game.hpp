#if !defined(GAME)
#define GAME

#include "IGame.hpp"

class Game : public IGame
{
private:
    std::shared_ptr<IWindow> window;
    std::shared_ptr<IWorld> world;
public:
    Game
    (
        std::shared_ptr<IWindow> window, 
        std::shared_ptr<IWorld> world
    );
    ~Game();

    virtual std::shared_ptr<IWindow> getWindow() override;
    virtual std::shared_ptr<IWorld> getWorld() override;
    virtual void processSingleTick() override;
};




#endif // GAME
