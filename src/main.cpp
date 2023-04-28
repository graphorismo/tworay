
#include <memory>
#include <vector>

#include "IMap.hpp"
#include "IPlayer.hpp"
#include "IWorld.hpp"
#include "IWindow.hpp"
#include "IGame.hpp"

#include "Map.hpp"
#include "Player.hpp"
#include "World.hpp"
#include "SFMLWindow.hpp"
#include "Game.hpp"

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