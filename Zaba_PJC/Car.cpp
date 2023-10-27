#include "Car.h"


Car::Car(float posX, float posY, std::string tekstura) {

	texture.loadFromFile(tekstura);
	shape.setSize(sf::Vector2f((texture.getSize().x), 40));   // wielkosc samochodu
	shape.setPosition(sf::Vector2f(posX, posY));  // pozycja poczatkowa samochodu
	shape.setTexture(&texture);

	originalPosX = posX;  // zapisanie pozycji poczatkowej
	originalPosY = posY;

}


Car::~Car()
{

}


void Car::Move(sf::Vector2u size, int globalTickrate)
{
	tickrate = globalTickrate;

	if (shape.getPosition().x > size.x)     //powrot do pozycji poczatkowej po wyjsciu po za ekran
	{
		shape.setPosition(sf::Vector2f(0 - shape.getSize().x, originalPosY));
	}

	shape.move(tickrate * 0.004 * shape.getSize().x, 0);


}
