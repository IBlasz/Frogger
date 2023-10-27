#include "Frog.h"

Frog::Frog(sf::Vector2u size)
{
    shape.setSize(sf::Vector2f(44, 37));                                                    // wilekosc
    shape.setPosition(sf::Vector2f(size.x / 2 - shape.getSize().x, size.y - shape.getSize().y));    //pozycja poczatkowa zaby                                                 //kolor zaby
    windowSize.x = size.x;                                                                 //zapisanie rozmiarow okna
    windowSize.y = size.y;

    texture.loadFromFile("images/pepe44x37.png");
    shape.setTexture(&texture);
}

Frog::~Frog()
{
}


void Frog::MoveFrog(sf::Event event)
{
    if (left == event.key.code)        // ruch w lewo
    {
        // Prevent the shape from going outside the left edge of the window
        if (shape.getPosition().x > 0)
            shape.move(-40, 0);
    }
    else if (right == event.key.code)    // ruch w prawo
    {
        // Prevent the shape from going outside the right edge of the window
        if (shape.getPosition().x < windowSize.x - 40)
            shape.move(40, 0);
    }
    else if (forward == event.key.code)  // ruch do gory
    {
        // Prevent the shape from going outside the top edge of the window
        if (shape.getPosition().y > 0)
            shape.move(0, -40);
    }
    else if (backward == event.key.code)  // ruch w dol
    {
        // Prevent the shape from going outside the bottom edge of the window
        if (shape.getPosition().y < windowSize.y - 40)
            shape.move(0, 40);
    }
}
void Frog::frogDies(sf::Vector2u size)
{
	shape.setPosition(sf::Vector2f(size.x / 2 - shape.getSize().x, size.y - shape.getSize().y));     //przeniesienie na pozycje poczatkowa
}
