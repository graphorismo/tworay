#if !defined(PLAYER)
#define PLAYER

#include "IPlayer.hpp"

class Player : public IPlayer
{
private:
    float positionX;
    float positionY; 
    float rotation;
public:

    Player(float positionX, float positionY, float rotation);

    ~Player();

    virtual void setPositionX(float positionX) override;
    virtual void setPositionY(float positionY) override;
    virtual void setRotation(float rotation) override;

    virtual float getPositionX() override;
    virtual float getPositionY() override;
    virtual float getRotation() override;
};


#endif // PLAYER
