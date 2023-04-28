#include <SFML/Graphics.hpp>
#include <memory>

class IMap
{
public:
    virtual std::shared_ptr<std::vector<int>> getData() = 0;
    virtual int getWidth() = 0;
    virtual int getHeight() = 0;
};

class Map : public IMap
{   
private:
    int width;
    int height;
    float rotation;
public:

    Map
    (
        int width, 
        int height, 
        std::shared_ptr<std::vector<int>> data
    ); 

    ~Map();

    virtual std::shared_ptr<std::vector<int>> getData() override;
    virtual int getWidth() override;
    virtual int getHeight() override;
};

class IPlayer
{
public:
    virtual void setPositionX(float x) = 0;
    virtual void setPositionY(float y) = 0;
    virtual void setRotation(float r) = 0;

    virtual float getPositionX() = 0;
    virtual float getPositionY() = 0;
    virtual float getRotation() = 0;
};

class Player : public IPlayer
{
private:
    float x;
    float y; 
    float r;
public:

    Player(float x, float y, float r);

    ~Player();

    virtual void setPositionX(float x) override;
    virtual void setPositionY(float y) override;
    virtual void setRotation(float r) override;

    virtual float getPositionX() override;
    virtual float getPositionY() override;
    virtual float getRotation() override;
};

class IWorld
{
public:
    virtual std::shared_ptr<IMap> getMap() = 0;
    virtual std::shared_ptr<IPlayer> getPlayer() = 0;
};

class World : public IWorld
{
private:
    std::shared_ptr<IMap> map;
    std::shared_ptr<IPlayer> player;

public:

    World
    (
        std::shared_ptr<IMap> map,
        std::shared_ptr<IPlayer> player    
    );

    ~World();

    virtual std::shared_ptr<IMap> getMap() override;
    virtual std::shared_ptr<IPlayer> getPlayer() override;
};

class IWindow
{
public:
    virtual int getWidth() = 0;
    virtual int getHeight() = 0;
    virtual bool checkIfOpen() = 0;
};

class SFMLWindow : public IWindow
{
private:
    sf::RenderWindow renderWindow;
public:

    SFMLWindow();

    ~SFMLWindow();

    virtual int getWidth() override;
    virtual int getHeight() override;
    virtual bool checkIfOpen() override;
};

class IGame
{
public:
    virtual std::shared_ptr<IWindow> getWindow() = 0;
    virtual std::shared_ptr<IWorld> getWorld() = 0;
    virtual void processSingleTick() = 0;
};

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


int main()
{
    std::shared_ptr<std::vector<int>> mapData
    (
        new (std::vector<int>){
            1, 1, 1, 1, 1,
            1, 0, 0, 0, 1,
            1, 0, 0, 0, 1,
            1, 0, 0, 0, 1,
            1, 1, 1, 1, 1
        }
    );
    std::shared_ptr<IMap>       map     ( new Map(5,5,mapData) );
    std::shared_ptr<IPlayer>    player  ( new Player(5.0, 5.0, 0.5) );
    std::shared_ptr<IWorld>     world   ( new World(map, player) );
    std::shared_ptr<IWindow>    window  ( new SFMLWindow() );
    std::shared_ptr<IGame>      game    ( new Game(window, world) );
    while (game->getWindow()->checkIfOpen())
    {
        game->processSingleTick();
    }
    return 0;
}