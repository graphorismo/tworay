#if !defined(SFMLWINDOW)
#define SFMLWINDOW

#include <SFML/Graphics.hpp>

#include "IWindow.hpp"

class SFMLWindow : public IWindow
{
private:
    std::shared_ptr<sf::RenderWindow> renderWindow;
public:

    SFMLWindow(int width, int height);

    ~SFMLWindow();

    virtual int getWidth() override;
    virtual int getHeight() override;
    
    virtual void close() override;
    virtual std::shared_ptr<std::vector<std::shared_ptr<IEvent>>> getEvents() override;
    virtual void drawWorld(std::shared_ptr<IWorld> world) override;
};

#endif // SFMLWINDOW
