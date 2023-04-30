#if !defined(SFMLWINDOW)
#define SFMLWINDOW

#include <SFML/Graphics.hpp>

#include "IWindow.hpp"

class SFMLWindow : public IWindow
{
private:
    sf::RenderWindow renderWindow;
public:

    SFMLWindow(int width, int height);

    ~SFMLWindow();

    virtual int getWidth() override;
    virtual int getHeight() override;
    
    virtual bool checkIfOpen() override;
};

#endif // SFMLWINDOW
