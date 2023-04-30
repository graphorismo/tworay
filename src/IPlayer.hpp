#if !defined(IPLAYER)
#define IPLAYER

class IPlayer
{
public:
    virtual void setPositionX(float positionX) = 0;
    virtual void setPositionY(float positionY) = 0;
    virtual void setRotation(float rotation) = 0;

    virtual float getPositionX() = 0;
    virtual float getPositionY() = 0;
    virtual float getRotation() = 0;
};

#endif // IPLAYER
