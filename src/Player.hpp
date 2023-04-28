#if !defined(PLAYER)
#define PLAYER

#include "IPlayer.hpp"

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


#endif // PLAYER
