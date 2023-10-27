#include "Levels.h"
Levels::Levels(float posX, float posY) {

	shape.setSize(sf::Vector2f(20, 20));
	shape.setFillColor(sf::Color::White);
	shape.setPosition(sf::Vector2f(posX, posY));
	texture.loadFromFile("images/level.png");
	shape.setTexture(&texture);

}


Levels::~Levels()
{

}
