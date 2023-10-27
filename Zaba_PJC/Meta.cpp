#include "Meta.h"
Meta::Meta(sf::Vector2u size, float MposX, float MposY)
{
	shape.setSize(sf::Vector2f(size.x, 50));                    // wielko�� mety
	shape.setPosition(sf::Vector2f(MposX, MposY));              // pozycja mety
	shape.setFillColor(sf::Color::Green);                      // kolor mety
}


Meta::~Meta()
{
}
