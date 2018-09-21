#include <SFML/Graphics.hpp>
#include <iostream>
#include "Button.h"
#include "Splash.h"
#include "Render.h"
#include "Player.h"
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <vector>
#include "Bullet.h"
#include "Enemy.h"
#include "Mushroom.h"
class Game
{
public:
    setRes();
    int getxRes();
    int getyRes();
    void setup();
private:
    int _xRes;
    int _yRes;
};