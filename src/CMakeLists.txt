cmake_minimum_required(VERSION 3.2)
project(Tworay VERSION 0.1 LANGUAGES CXX)
add_executable(tworay 
    main.cpp 
    Game.cpp
    Map.cpp
    Player.cpp 
    SFMLWindow.cpp 
    World.cpp
)
target_link_libraries(tworay sfml-graphics sfml-window sfml-system)