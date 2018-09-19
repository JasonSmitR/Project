#include "Button.h"
//    Button::Button(y_pos, name, char_size)
//    {
//    }
    
    Button::~Button()
    {
        
    }
    
    void Button::create_button()
    {
            auto button_y_pos = _y_pos * _offset_between_buttons;
            _rect.setSize(sf::Vector2f(_button_size_x,_button_size_y));
            xRes = Render::getScreenxRes();
            int button_left_lim = xRes/2-_button_size_x/2;
            _rect.setPosition(button_left_lim,button_y_pos);
            _rect.setFillColor(sf::Color::White);
            
            _text_in_rect.setFont(_font);
            _text_in_rect.setString(_name);
            _text_in_rect.setPosition(button_left_lim,button_y_pos-10);
            _text_in_rect.setCharacterSize(_button_size_y);
            _text_in_rect.setFillColor(sf::Color::Blue);
    }
    
    void Button::set_font()
    {
        _font.loadFromFile("reqs/arial.ttf");
    }
    
    void Button::renderWin(sf::RenderWindow& RenderWindow)
    {
        RenderWindow.draw(_rect);
        RenderWindow.draw(_text_in_rect);
    }