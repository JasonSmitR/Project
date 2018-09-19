#include "Mushroom.h" 

    Mushroom::Mushroom(float x , float y)
    {
//float x1 = 1.f;
//float y1 = 1.f;
//x1=x;
//y1=y;
        mushroomShape.setSize(sf::Vector2f(10, 4));
         mushroomShape.setPosition( x,  y ); 
         mushroomShape.setFillColor(Color::Blue);
    }
    
    void Mushroom:: setPosition(float x, float y){
         mushroomShape.setPosition( x,  y ); 
    }
    FloatRect Mushroom::getPosition()
    {
        return  mushroomShape.getGlobalBounds();
    }
    
    RectangleShape Mushroom::getShape()
    {
        return  mushroomShape;
    }
   void Mushroom::drawMushroom (RenderWindow &window)
   {
       window.draw(mushroomShape);
   }
   
   bool Mushroom::leftLocationAllowed()
   {     
        if ( mushroomShape.getPosition().x <= 1) 
        {
            return false;
        }
        else
            return true;
    }
    
    bool Mushroom::rightLocationAllowed()
    {

        if ( mushroomShape.getPosition().x >= 1200 -10 ) //this needs to change to the the Xres value and enemy size values //need to replace 10 with the enemy size, maybe create a func that returns the size
        {
            return false;
        }
        else
            return true;
    }
    
    bool Mushroom::checkCollision(Bullet bullet)
    {
        if(mushroomShape.getGlobalBounds().intersects(bullet.getGlobalBounds()))
        {
            return true;
        }
        else
            return false;
    }
    
    bool Mushroom::checkCollision(Player player)
    {
        if(mushroomShape.getGlobalBounds().intersects(player.getGlobalBounds()) )
        {
            return true;
        }
        else
            return false;
    }
         
          bool Mushroom::checkCollision(Enemy enemy)
    {
        if(mushroomShape.getGlobalBounds().intersects(enemy.getPosition()) )
        {
            return true;
        }
        else
            return false;
    }
    void Mushroom::move(float x, float y)
    {
        mushroomShape.move(x,y);
    }
    void Mushroom::setColor(sf::Color color)
    {
        mushroomShape.setFillColor(color);
    }
//void update( Vector2f position)
//    {
//        mushroomShape.setPosition(position); 
//    }  

