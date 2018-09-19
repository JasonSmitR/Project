#include "Render.h"
void Render::setScreenRes()
{
    std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes(); //sfml-dev.org
    //choose the highest supported resolution first and all selection later
    for (auto i = 0u; i < modes.size(); i++ )
    {
        if((long(modes[i].height) * long(modes[i].width)) <= 2073600.l) //highest allowed res
        {
            _xRes= modes[i].width;
            _yRes=modes[i].height;
            break; //exit the for loop
        }
        else
        {
            //continue
        }
    }
    
}

std::vector<sf::VideoMode> Render::getScreenSizes()
{
    auto modes = sf::VideoMode::getFullscreenModes(); //sfml-dev.org
    return modes;
}

sf::RenderWindow& Render::startRendering()
{
    sf::RenderWindow renderWin(sf::VideoMode(_xRes,_yRes),"Taxi!");
    return renderWin&;
}

int Render::getScreenxRes()
{
    return _xRes;
}

int Render::getScreenyRes()
{
    return _yRes;
}