#include "Police.h"
Police::Police(float posX, float posY, double speed) {
	this->speed = speed;
	shape.setSize(sf::Vector2f(118, 40));                            // wielkosc klody
	shape.setPosition(sf::Vector2f(posX, posY));                     // pozycja poczatkowa klody
	texture.loadFromFile("images/car118x40.png");

	shape.setTexture(&texture);

	originalPosX = posX;           // zapisanie pozycji pocz�tkowej
	originalPosY = posY;
}


Police::~Police()
{
}


void Police::Move(sf::Vector2u size, int globalTickrate)
{
	tickrate = 1;

	if (goingRight)                                   // ruch w prawo
	{
		shape.move(speed * tickrate * shape.getSize().x, 0);
		shape.setScale(1.0f, 1.0f);
	}
	else                                             // ruch w lewo
	{
		shape.move(-speed * tickrate * shape.getSize().x, 0);
		shape.setScale(-1.0f, 1.0f);
	}
	if (shape.getPosition().x > size.x)              // zmiana kierunku ruchu po wyj�ciu obiektu za ekran
		goingRight = 0;
	else if (shape.getPosition().x < originalPosX - shape.getSize().x)   // zmiana kierunku ruchu po wyj�ciu obiektu za ekran
		goingRight = 1;
}
