#if !defined(IWINDOW)
#define IWINDOW

class IWindow
{
public:
    virtual int getWidth() = 0;
    virtual int getHeight() = 0;
    virtual bool checkIfOpen() = 0;
};

#endif // IWINDOW
