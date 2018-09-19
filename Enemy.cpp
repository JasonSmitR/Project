#include "Enemy.h" 
    Enemy::Enemy(float initialPosition)
    {
 
        enemyShape.setSize(sf::Vector2f(10, 4));
        enemyShape.setPosition(0.f + 20.f*initialPosition , 0.f); 
        enemyShape.setFillColor(Color::Red);
    }
    
    FloatRect Enemy::getPosition()
    {
        return  enemyShape.getGlobalBounds();
    }
    
    RectangleShape Enemy::getShape()
    {
        return  enemyShape;
    }
   void Enemy::drawEnemy (RenderWindow &window)
   {
       window.draw(enemyShape);
   }

 
   void Enemy::moveLeft()
   {
        //position.x -= enemySpeed;
        enemyShape.move(-2.f, 0.f);
      //  enemyShape.setPosition(position); 
   }
 
    void Enemy::moveRight()
    {
       // position.x += enemySpeed;
       enemyShape.move(2.f, 0.f);
       // enemyShape.setPosition(position);        
    }
    
    void Enemy::moveUp()
    {
        enemyShape.move(0.f, -2.f);
         //position.y -= enemySpeed;
        // enemyShape.setPosition(position);
    }
    
    void Enemy::moveDown()
    {
        enemyShape.move(0.f, 10.f);
        //position.y += 4*enemySpeed;
      //  enemyShape.setPosition(position);
    }
   
   bool Enemy::leftLocationAllowed()
   {     
        if ( enemyShape.getPosition().x <= 1) 
        {
            return false;
        }
        else
            return true;
    }
    
    bool Enemy::rightLocationAllowed()
    {

        if ( enemyShape.getPosition().x >= 1200 -10 ) //this needs to change to the the Xres value and enemy size values //need to replace 10 with the enemy size, maybe create a func that returns the size
        {
            return false;
        }
        else
            return true;
    }
    
    bool Enemy::checkCollision(Bullet bullet)
    {
        if(enemyShape.getGlobalBounds().intersects(bullet.getGlobalBounds()) /*&& isAlive == true*/)
        {
            return true;
        }
        else
            return false;
    }
    
    bool Enemy::checkCollision(Player player)
    {
        if(enemyShape.getGlobalBounds().intersects(player.getGlobalBounds()) /*&& isAlive == true*/)
        {
            return true;
        }
        else
            return false;
    }  
    
   Vector2f Enemy:: returnPosition()
 {
     return enemyShape.getPosition();   //This function is used in order for bullet to use as a variable. 
 }
 



         


