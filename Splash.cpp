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
//void Splash::setBackground()
//{
//    _background_tex.loadFromFile("reqs/bangkok.jpg");
//}
//
//int Splash::choices()
//{
//
//        Render renderWindow;
//        renderWindow.setScreenRes();
//        renderWindow.startRendering();
//        Button play(1, "Play", renderWindow.getScreenxRes(),renderWindow.getScreenyRes());
//        Button Exit(2, "Exit", renderWindow.getScreenxRes(),renderWindow.getScreenyRes());
//        Button Highscore(3, "High", renderWindow.getScreenxRes(), renderWindow.getScreenyRes());
//        play.create_button();
//        play.set_font();
//        Exit.create_button();
//        Exit.set_font();
//        Highscore.create_button();
//        Highscore.set_font();
//        Exit.set_font();
//        while(true)
//        {
//            play.renderWin(renderWindow.RenderWinPointer());
//            Exit.renderWin(renderWindow.RenderWinPointer());
//            Highscore.renderWin(renderWindow.RenderWinPointer());
//        }
//}
//
//void Splash::renderWin(sf::RenderWindow& RenderWindow)
//{
//    sf::Sprite background(_background_tex);
//    RenderWindow.clear();
//    RenderWindow.draw(background);
//    RenderWindow.display();
//}

//int main()
//{
//    auto xRes = 0;
//    auto yRes = 0;
//    
//    //this whole section of code needs to be moved to the Render class
//    std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes(); //sfml-dev.org
//    //choose the highest supported resolution first and all selection later
//    for (auto i = 0u; i < modes.size(); i++ ) 
//    {
//        if((long(modes[i].height) * long(modes[i].width)) <= 2073600.l) //highest allowed res
//        {
//            xRes= modes[i].width;
//            std::cout << "xRes set to "<<xRes << std::endl;
//            yRes=modes[i].height;
//            std::cout<< " and yRes set to "<< yRes <<std::endl;
//            break; //exit the for loop
//        }
//        else
//        {
//            //continue
//        }
//    }
//    
//        sf::RenderWindow renderWin(sf::VideoMode(xRes,yRes),"Taxi!",sf::Style::Fullscreen);
//        sf::Event event;
//        sf::Texture background_tex;
//        background_tex.loadFromFile("reqs/bangkok.jpg");
//        sf::Sprite background(background_tex);
//        background.setScale(1980/1200,1080/700);
//        Button play(1, "Play", xRes, yRes);
//        Button Exit(2, "Exit", xRes, yRes);
//        Button Highscore(3, "High", xRes, yRes);
//        play.create_button();
//        play.set_font();
//        Exit.create_button();
//        Exit.set_font();
//        Highscore.create_button();
//        Highscore.set_font();
//        Exit.set_font();
//        while(renderWin.isOpen())
//        {
//            while(renderWin.pollEvent(event)) //look for events, i.e. close event            
//            {
//                if(event.type == sf::Event::EventType::Closed)
//                {
//            
//                        renderWin.close();
//                }
//                
//                if(event.type == sf::Event::KeyPressed)
//                {
//                    if(event.key.code == sf::Keyboard::Escape)
//                    {
//                        renderWin.close();
//                    }
//                }  
//                
//                if(event.type == sf::Event::MouseButtonPressed)
//                {
//                    auto mouse_pos_x = sf::Mouse::getPosition(renderWin).x;
//                    auto mouse_pos_y = sf::Mouse::getPosition(renderWin).y;
//                    if((mouse_pos_x>(xRes/2-100)) && (mouse_pos_x < (xRes/2-100+200)))
//                       {
//                            if(mouse_pos_y > 100 && mouse_pos_y<100+120)
//                            {
//                                bool killPlayer = false;//
//                                std::cout<<"Starting game"<<std::endl;
//                                
//                                            //srand(time(NULL));
//                                            renderWin.setFramerateLimit(500);
//                                            sf::Vector2f startPos;
//                                            startPos.x = float(xRes/2);
//                                            startPos.y = float(yRes - 60); // 60 should be half of playArea.size() 
//                                            Player player(30,10, startPos);
//
//                                            Bullet bullet; 
//                                            std::vector<Enemy> enemyVec; 
//                                             std::vector<Mushroom> mushroomVec;
//                                             
//                                                for (auto i =0u; i < 20; i++ ){
//                                               Enemy enemy(i);
//                                               enemy.rightDirection = true;
//                                              enemyVec.push_back(enemy);
//                                             }
//                                             srand(time(NULL));
//                                           for (auto i =0u; i < 300; i++ ){
//                                               float x = std:: rand() % 1200 +10;
//                                                float y = std:: rand() % 600 +10; 
//                                                Mushroom mushroom(x,y);
//                                                   mushroomVec.push_back(mushroom);
//                                           }
//                                               
//                                               
//                                               
//                                            auto Timer = 0u;
//                                            
//                                            std::vector<Bullet> bulletVec;
//                                        while (renderWin.isOpen())
//                                        {
//                                            Event event;
//                                            while (renderWin.pollEvent(event))
//                                            {
//                                                if (event.type == Event::Closed)
//                                                    renderWin.close();
//                                            }
//                                            
//
//                                            for(auto i =0u; i<enemyVec.size();i++)
//                                            {
//                                                if(enemyVec[i].rightDirection == true)
//                                                    {
//                                                        if( enemyVec[i].rightLocationAllowed())
//                                                            {
//                                                                enemyVec[i].moveRight();
//                                                            }
//                                                        else if(enemyVec[i].rightDirection == true)
//                                                            {
//                                                                enemyVec[i].rightDirection = false;
//                                                                //movingLeft = true;
//                                                                enemyVec[i].moveDown();
//                                                                enemyVec[i].moveLeft();
//
//                                                            }
//                                             
//                                                    }
//                                                    else if(enemyVec[i].rightDirection == false)
//                                                    {
//                                                        if( enemyVec[i].leftLocationAllowed()){
//                                                       enemyVec[i].moveLeft();}
//                                                       else
//                                                            {
//                                                                enemyVec[i].rightDirection = true;
//                                                                enemyVec[i].moveDown();
//                                                            }
//                                                    }
//                                            }
//                                            
//                                            if (Keyboard::isKeyPressed(Keyboard::Left) && player.leftLocationAllowed())
//                                            {
//                                                player.moveLeft();
//                                            }
//                                            else if (Keyboard::isKeyPressed(Keyboard::Right) && player.rightLocationAllowed() )
//                                            {
//                                                player.moveRight();
//                                            }
//                                            else if (Keyboard::isKeyPressed(Keyboard::Up)   && player.upLocationAllowed()  )
//                                            {
//                                                player.moveUp();
//                                            }
//                                            else if (Keyboard::isKeyPressed(Keyboard::Down) && player.downLocationAllowed() )
//                                            {
//                                                player.moveDown();
//                                            }
//                                            else if (Keyboard::isKeyPressed(Keyboard::Escape))
//                                            {
//                                                break;
//                                            }
//                                          
//                                                
//                                                if (Timer < 7){
//                                                Timer++;}
//                                                
//                                                
//
//                                                if (Keyboard::isKeyPressed(Keyboard::Space) && Timer >= 6.5) 
//                                                {
//                                                    bullet.update(player.returnPosition());
//
//                                                    bulletVec.push_back(bullet);
//
//                                                    Timer = 0;
//                                                }
//                                                
//                                                for (auto i = 0u; i < bulletVec.size(); i++)
//                                                { 
//                                                   bulletVec[i].Move(0.f, -4.5f);
//                                                   for(auto j=0u; j< enemyVec.size();j++)
//                                                   {  
//                                                        if(enemyVec[j].checkCollision(bulletVec[i]))
//                                                            {
//                                                                Mushroom mushroom1(1.f,1.f);
//                                                                mushroomVec.push_back(mushroom1);
//                                                                mushroomVec.back().move(enemyVec[j].returnPosition().x,enemyVec[j].returnPosition().y);
//                                                                mushroomVec.back().setColor(sf::Color::Green);
//                                                                enemyVec.erase(enemyVec.begin()+j);
//                                                                bulletVec.erase(bulletVec.begin()+i);
//                                                       }
//                                                   }
//                                                }
//                                                 for (auto i = 0u; i < bulletVec.size(); i++)
//                                                {
//                                                   for(auto j=0u; j< mushroomVec.size();j++)
//                                                   {   
//                                                        if(mushroomVec[j].checkCollision(bulletVec[i])){
//                                                        mushroomVec.erase(mushroomVec.begin()+j);
//                                                        bulletVec.erase(bulletVec.begin()+i);}
//                                                   }
//                                                }
//                                                for (auto i = 0u; i < enemyVec.size(); i++)
//                                                {
//                                                   for(auto j=0u; j< mushroomVec.size();j++)
//                                                   {   
//                                                        if(mushroomVec[j].checkCollision(enemyVec[i])){
//                                                            if(enemyVec[i].rightDirection == true)
//                                                            {
//                                                                enemyVec[i].rightDirection = false;
//                                                                //movingLeft = true;
//                                                                enemyVec[i].moveDown();
//                                                                enemyVec[i].moveLeft();
//
//                                                            } 
//                                                            else if(enemyVec[i].rightDirection == false)
//                                                            {
//                                                                enemyVec[i].rightDirection = true;
//                                                                //movingLeft = true;
//                                                                enemyVec[i].moveDown();
//                                                                enemyVec[i].moveRight();
//
//                                                                             }
//                                                   }
//                                                }
//                                                }
//                                                
//                                              for(auto j=0u; j< enemyVec.size();j++)
//                                                   {   
//                                                        if(enemyVec[j].checkCollision(player))
//                                                            {
//                                                                enemyVec.erase(enemyVec.begin()+j);
//                                                                killPlayer = true;
//                                                            }
//                                        
//                                                    }
//                                                    renderWin.clear();
//                                                    renderWin.draw(player.getShape());
//            
//                                                
//                                                for(auto i = 0u ; i < enemyVec.size(); i++)
//                                                {
//                                                    enemyVec[i].drawEnemy(renderWin);
//                                                }
//                                                for (auto i = 0u; i < bulletVec.size(); i++)
//                                                {
//                                                    renderWin.draw(bulletVec[i].getShape());
//                                                }
//                                                
//                                                for(auto i = 0u ; i < mushroomVec.size(); i++)
//                                                {
//                                                    mushroomVec[i].drawMushroom(renderWin);
//                                                }
//                                              
//                                               
//                                                if(killPlayer==true || enemyVec.empty())
//                                                    break;
//                                                renderWin.display();
//
//                                        }
//                            }
//                            else if(mouse_pos_y > 250 && mouse_pos_y<(250+120))//exit
//                                {
//                                    renderWin.close();
//                                    std::cout<<"Exiting game"<<std::endl;
//                                }
//                            else if(mouse_pos_y > 400 && mouse_pos_y < 520)//highscore
//                                {
//                                    std::cout <<"Showing high-scores"<<std::endl;
//                                }
//                            else
//                            {
//                                //
//                            }
//                       }
//                
//                }
//            renderWin.clear(); //clear any old happenings
//            renderWin.draw(background);
//            play.renderWin(renderWin);
//            Exit.renderWin(renderWin);
//            Highscore.renderWin(renderWin);
//            renderWin.display(); //show changes
//        }
//        }
//}
//
