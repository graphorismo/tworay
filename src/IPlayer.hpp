#if !defined(IPLAYER)
#define IPLAYER

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

#endif // IPLAYER
