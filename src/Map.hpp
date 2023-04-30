#if !defined(MAP)
#define MAP

#include <memory>
#include <vector>

#include "IMap.hpp"

class Map : public IMap
{   
private:
    int width;
    int height;
    std::shared_ptr<std::vector<int>> data;
public:

    Map
    (
        int width, 
        int height, 
        std::shared_ptr<std::vector<int>> data
    ); 

    ~Map();

    virtual std::shared_ptr<std::vector<int>> getData() override;
    virtual int getWidth() override;
    virtual int getHeight() override;
};

#endif // MAP
