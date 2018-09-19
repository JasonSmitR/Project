#include "Render.h"
#include <iostream>
void Render::setScreenRes()
{
    std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes(); //sfml-dev.org
    //choose the highest supported resolution first and all selection later
    for (auto i = 0u; i < modes.size(); i++ )
    {
        if((long(modes[i].height) * long(modes[i].width)) <= 2073600.l) //highest allowed res
        {
            _xRes= modes[i].width;
            std::cout << "xRes set to "<<_xRes << std::endl;
            _yRes=modes[i].height;
            std::cout<< " and yRes set to "<< _yRes <<std::endl;
            break; //exit the for loop
        }
        else
        {
            //continue
        }
    }
    
}

bool Render::isOpen()
{
    return renderWin.isOpen();
}

std::vector<sf::VideoMode> Render::getScreenSizes()
{
    auto modes = sf::VideoMode::getFullscreenModes(); //sfml-dev.org
    return modes;
}

void Render::startRendering()
{
    sf::RenderWindow renderWin(sf::VideoMode(_xRes,_yRes),"Taxi!");
}

int Render::getScreenxRes()
{
    return _xRes;
}

int Render::getScreenyRes()
{
    return _yRes;
}

sf::RenderWindow& Render::RenderWinPointer()
{
    return renderWin;
}