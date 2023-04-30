#include "SFMLWindow.hpp"


SFMLWindow::SFMLWindow(int width, int height)
: renderWindow(sf::VideoMode(width, height), "SFML works!")
{  

}

SFMLWindow::~SFMLWindow()
{

}

int SFMLWindow::getWidth()
{
    return renderWindow.getSize().x;
}

int SFMLWindow::getHeight()
{
    return renderWindow.getSize().y;
}

bool SFMLWindow::checkIfOpen()
{
    return renderWindow.isOpen();
}