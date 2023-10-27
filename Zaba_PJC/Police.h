/**
* \brief klasa Police
* Definicja klasy policji
*/

#pragma once
#include <SFML/Graphics.hpp>
#include "Object.h"

class Police :public Object
{
public:
	/**
	* \brief Konstruktor klasy Police
	* \param posX okresla poczatkowe wsporzedne x obiektu
	* \param posY okresla poczatkowe wsporzedne y obiektu
	* \param speed pozwala ustawić mnożnik prędkości dla policji
	*/
	Police(float posX, float posY, double speed);
	/**
	* \brief Destruktor klasy Police
	*/
	~Police();
	/**
	* \brief Metoda Move klasy Police
	* Steruje ona poruszaniem się danego obiektu
	* \param size pozwala na okre�lenie kiedy obiekt znalaz� si� po za oknem gry
	* \param globalTickrate steruje predkoscia wykonywania ruch�w
	*/
	void Move(sf::Vector2u size, int globalTickrate);


private:
	/**
	* orginalPosX okresla startowe wsporzedne x danego obiektu
	* orginalPosY okresla startowe wsporzedne y danego obiektu
	*/
	float originalPosX, originalPosY;
	/// goingRight okresla w ktora strone wykonywany jest ruch
	bool goingRight = 1;
	/// prędkość poruszania się obiektów
	int tickrate;
	/// mnożnik prędkości dla Policji
	double speed;
	/// tekstura Policji
	sf::Texture texture;
};

