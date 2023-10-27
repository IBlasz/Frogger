#include "Lives.h"
Lives::Lives(float posX, float posY) {

	shape.setSize(sf::Vector2f(20, 20));
	shape.setFillColor(sf::Color::White);
	shape.setPosition(sf::Vector2f(posX, posY));
	texture.loadFromFile("images/heart20x17.png");
	shape.setTexture(&texture);

}


Lives::~Lives()
{

}


