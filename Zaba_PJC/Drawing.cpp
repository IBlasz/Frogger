#include "Drawing.h"

Drawing::Drawing()
{
}


Drawing::~Drawing()
{
}

void Drawing::draw(sf::RenderWindow& window)
{
	window.draw(shape);
}

sf::RectangleShape Drawing::GetShape()
{
	return shape;
}
