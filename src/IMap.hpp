#if !defined(IMAP)
#define IMAP

#include <memory>
#include <vector>

class IMap
{
public:
    virtual std::shared_ptr<std::vector<int>> getData() = 0;
    virtual int getWidth() = 0;
    virtual int getHeight() = 0;
};

#endif // IMAP
