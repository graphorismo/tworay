#include "SFMLWindow.hpp"

#include "events/SFMLWindowCloseEvent.hpp"


SFMLWindow::SFMLWindow(int width, int height)
: renderWindow(new sf::RenderWindow(sf::VideoMode(width, height), "SFML works!"))
{  

}

SFMLWindow::~SFMLWindow()
{

}

int SFMLWindow::getWidth()
{
    return renderWindow->getSize().x;
}

int SFMLWindow::getHeight()
{
    return renderWindow->getSize().y;
}


void SFMLWindow::close()
{
    renderWindow->close();
}

std::shared_ptr<std::vector<std::shared_ptr<IEvent>>> SFMLWindow::getEvents()
{
    sf::Event sfmlEvent;
    std::shared_ptr<std::vector<std::shared_ptr<IEvent>>> 
        events(new std::vector<std::shared_ptr<IEvent>>);
    while (this->renderWindow->pollEvent(sfmlEvent))
    {
        if(sfmlEvent.type == sf::Event::Closed){
            events->push_back(std::shared_ptr<IEvent>(new SFMLWindowCloseEvent()));
        }
    }
    return events;
}

void SFMLWindow::drawWorld(std::shared_ptr<IWorld> world)
{
    
}