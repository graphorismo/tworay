#include "Player.hpp"

Player::Player(float positionX, float positionY, float rotation)
{
    this->positionX = positionX;
    this->positionY = positionY;
    this->rotation = rotation;
}

Player::~Player()
{

}

void Player::setPositionX(float positionX)
{
    this->positionX = positionX;
}

void Player::setPositionY(float positionY)
{
    this->positionY = positionY;
}

void Player::setRotation(float rotation)
{
    this->rotation = rotation;
}

float Player::getPositionX()
{
    return positionX;
}

float Player::getPositionY()
{
    return positionY;
}

float Player::getRotation()
{
    return rotation;
}