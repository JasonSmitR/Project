// Using as Reference: http://gamecodeschool.com/sfml/coding-a-simple-pong-game-with-sfml/
// Using as Reference: https://www.youtube.com/watch?v=DZOCzW9e6Qs
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <vector>
 
using namespace sf;
 
class Player
{
private:
    
float playerSpeed = 8.0f;
RectangleShape playerShape;
Vector2f position;

public:
      
    Player(int sizeX, int sizeY, Vector2f position);
 
    FloatRect getPosition();
 
    RectangleShape getShape();
 
    void moveLeft();
 
    void moveRight();
    
    void moveUp();
    
    void moveDown();
    
    void update();
    
    Vector2f returnPosition();

    bool leftLocationAllowed();
    bool rightLocationAllowed();
    bool upLocationAllowed();
    bool downLocationAllowed();
     sf::FloatRect getGlobalBounds()
    {
        return playerShape.getGlobalBounds();
    }
};


