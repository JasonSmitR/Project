// Using as Reference: http://gamecodeschool.com/sfml/coding-a-simple-pong-game-with-sfml/
// Using as Reference: https://www.youtube.com/watch?v=DZOCzW9e6Qs
#include "Player.h"
 
Player::Player(int sizeX, int sizeY, Vector2f position1)
{
    playerShape.setSize(sf::Vector2f(sizeX, sizeY)); //should probably be set as a standard shape
    playerShape.setPosition(position1);
    position = position1; //not the correct way to initalize, do the other way later
}

FloatRect Player::getPosition()
{
    return  playerShape.getGlobalBounds();
}
 
RectangleShape Player::getShape()
{
    return  playerShape;
}
 
void Player::moveLeft()
{
    position.x -= playerSpeed;
    playerShape.setPosition(position);
}

void Player::moveRight()
{
    position.x += playerSpeed;
    playerShape.setPosition(position);
}

void Player::moveUp()
{
    position.y -= playerSpeed;
    playerShape.setPosition(position);
}
    
void Player::moveDown()
{
    position.y += playerSpeed;
    playerShape.setPosition(position);
}

    
//void Player::update()    //Update player's position. 
//{
//    playerShape.setPosition(position);
//}

 Vector2f Player:: returnPosition()
 {
     return position;   //This function is used in order for bullet to use as a variable. 
 }

bool Player::leftLocationAllowed()
{
    if ( playerShape.getPosition().x <= 1) 
        {
            return false;
        }
    else
        return true;
}
bool Player::rightLocationAllowed()
{   //Create temporary variable to map y position of player.
    if ( playerShape.getPosition().x >= 1230-60) //should be windowWidth - player.x.size() 
        {
            return false;
        }
    else
        return true;
}
bool Player::upLocationAllowed()
{
    if ( playerShape.getPosition().y <= 600) //should be (windowHeight - playAreaSize().y) not 700 
        {
            return false;
        }
    else
        return true;
}
      
bool Player::downLocationAllowed()
{
    if ( playerShape.getPosition().y >= 700- 21)
    {
        return false;
    }
    else
        return true;
          
}



