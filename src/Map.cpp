#include "Map.hpp"

Map::Map
(
    int width, 
    int height, 
    std::shared_ptr<std::vector<int>> data
){
    this->width = width;
    this->height = height;
    this->data = data;
} 

Map::~Map(){

}

std::shared_ptr<std::vector<int>> Map::getData()
{
    return data;
}

int Map::getWidth()
{
    return width;
}

int Map::getHeight()
{
    return height;
}