#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Enemy.h"
#include <random>

using namespace sf;
 
class Mushroom : Bullet
{
private:
    RectangleShape mushroomShape;
    Vector2f position;
public: 
void setPosition(float x, float y);
    bool rightDirection; 
// Constructor. Initializing position.
  Mushroom(float x, float y);
   void  drawMushroom (RenderWindow &window);
    FloatRect getPosition();
    RectangleShape getShape();
   // void update();
    bool leftLocationAllowed();
    bool rightLocationAllowed();
    bool checkCollision(Bullet bullet);
    bool checkCollision(Player player);
    bool checkCollision(Enemy enemy);
    void move(float x, float y);
    void setColor(sf::Color color);
   // void update( Vector2f position);
    
    
};


