#include <SFML/Graphics.hpp>

class Button
{
public:
    Button(int y_pos, std::string name, int xRes, int yRes): _y_pos(y_pos), _name(name), _xRes(xRes), _yRes(yRes) {}
    ~Button();
    void create_button();
    void set_font();
    void renderWin(sf::RenderWindow& RenderWindow);
private:
    const int _button_size_x = 200;
    const int _button_size_y = 100;
    const int _button_starting_y_pos = 50;
    const int _offset_between_buttons = 150;
    int _y_pos;
    std::string _name;
    int _xRes;
    int _yRes;
    sf::Font _font;
    sf::RectangleShape _rect;
    sf::Text _text_in_rect;
};