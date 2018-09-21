#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <vector>
#include "bullet.h"
#include "Player.h"


using namespace sf;
 
class Enemy
{
private:
    RectangleShape enemyShape;
    float enemySpeed = 2.0f;
    Vector2f position;
public: 

    bool rightDirection; 
    Enemy(float initialPosition);
    void  drawEnemy (RenderWindow &window);
    FloatRect getPosition();
    RectangleShape getShape();
    void update();
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    bool leftLocationAllowed();
    bool rightLocationAllowed();
    bool checkCollision(Bullet bullet);
    bool checkCollision(Player player);
    Vector2f returnPosition();
    float returnPositionX();
    float returnPositionY();
 



    
};


