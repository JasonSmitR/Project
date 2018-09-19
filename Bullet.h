#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace sf;
 
class Bullet
{
private:
RectangleShape bulletShape;
Vector2f position;
public:
       
    Bullet()
    {
        bulletShape.setSize(sf::Vector2f(2, 8));
        bulletShape.setPosition(position); 
        bulletShape.setFillColor(Color::Red);
    }
 
    FloatRect getPosition()
    {
        return  bulletShape.getGlobalBounds();
    }
    
 
    RectangleShape getShape()
    {
        return  bulletShape;
    }
 
 
    void update( Vector2f position)
    {
        bulletShape.setPosition(position); //Update Bullet Position. Takes a vector2f variable as a parameter to map it to the player's position.
    }  
 
   void Move(float x, float y)
   {
      bulletShape.move(x, y);     //Function to Move bullet in x and y direction. 
   }
   
    sf::FloatRect getGlobalBounds()
    {
        return bulletShape.getGlobalBounds();
    }

};
