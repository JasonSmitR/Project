#include <SFML/Graphics.hpp>
class Render
{
public:
    void setScreenRes();
    std::vector<sf::VideoMode> getScreenSizes();
    int getScreenyRes();
    int getScreenxRes();
    bool isOpen();
    void startRendering();
    sf::RenderWindow& RenderWinPointer();
private:
    int _xRes=1600; //default value
    int _yRes=900; //default value
    sf::RenderWindow renderWin ;
};