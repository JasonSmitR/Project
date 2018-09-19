#include <iostream>
#include "Button.h"
#include "Splash.h"
#include "Render.h"

void Splash::setBackground()
{
    _background_tex.loadFromFile("reqs/bangkok.jpg");
}

int Splash::choices()
{
        Button play(1, "Play", 1);
        Button Exit(2, "Exit", 1);
        Button Highscore(3, "High", 1);
        play.create_button();
        play.set_font();
        Exit.create_button();
        Exit.set_font();
        Highscore.create_button();
        Highscore.set_font();
        Exit.set_font();
        Render::renderWin renderWindow;
        Render::setScreenRes();
        auto xRes=renderWindow.Render::getScreenxRes();
        auto yRes=Render::getScreenyRes();
        sf::RenderWindow renderWin(sf::VideoMode(xRes,yRes),"Taxi!");
        while(renderWin.isOpen())
        {
            play.renderWin(renderWin);
            Exit.renderWin(renderWin);
            Highscore.renderWin(renderWin);
            renderWin(renderWin)
        }
}

void Splash::renderWin(sf::RenderWindow& RenderWindow)
{
    sf::Sprite background(_background_tex);
    RenderWindow.clear();
    RenderWindow.draw(background);
    RenderWindow.display();
}

void Game::Game()
{
        while(renderWin.isOpen())
        {
            while(renderWin.pollEvent(event)) //look for events, i.e. close event            
            {
                if(event.type == sf::Event::EventType::Closed)
                {
            
                        renderWin.close();
                }
                
                if(event.type == sf::Event::KeyPressed)
                {
                    if(event.key.code == sf::Keyboard::Escape)
                    {
                        renderWin.close();
                    }
                }  
                
                if(event.type == sf::Event::MouseButtonPressed)
                {
                    auto mouse_pos_x = sf::Mouse::getPosition(renderWin).x;
                    std::cout<<"X.pos"<<mouse_pos_x<<std::endl;
                    auto mouse_pos_y = sf::Mouse::getPosition(renderWin).y;
                    std::cout<<"y.pos"<<mouse_pos_y<<std::endl;
                    if((mouse_pos_x>(xRes/2-100)) && (mouse_pos_x < (xRes/2-100+200)))
                       {
                            if(mouse_pos_y > 100 && mouse_pos_y<100+120)
                            {
                                std::cout<<"Starting game"<<std::endl;
                            }
                            else if(mouse_pos_y > 250 && mouse_pos_y<(250+120))//exit
                                {
                                    renderWin.close();
                                    std::cout<<"Exiting game"<<std::endl;
                                }
                            else if(mouse_pos_y > 400 && mouse_pos_y < 520)//highscore
                                {
                                    std::cout <<"Showing high-scores"<<std::endl;
                                }
                            else
                            {
                                //
                            }
                       }
                
                }
        }
        }
}