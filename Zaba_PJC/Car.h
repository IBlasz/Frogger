/**
* \brief klasa Car
* Definicja klasy samochodu
*/

#pragma once
#include <SFML/Graphics.hpp>
#include "Object.h"
#include <random>

class Car : public Object
{
public:
	/**
	* \brief Konstruktor klasy Car
	* \param posX okresla poczatkowe wspolrzedne x obiektu
	* \param posY okresla poczatkowe wspolrzedne y obiektu
	* \param tekstura ustawia teksturę samochodu z pliku
	*/
	Car(float posX, float posY, std::string tekstura);
	/**
	* \brief Destruktor klasy Car
	*/
	~Car();
	/**
	* \brief Metoda Move klasy Car
	* Steruje ona poruszaniem się danego obiektu
	* \param size pozwala na okreslenie kiedy obiekt znalazl sie po za oknem gry
	* \param globalTickrate steruje predkoscia wykonywania ruch�w
	*/
	void Move(sf::Vector2u size, int globalTickrate);


private:
	/**
	* Zmienna orginalPosX okresla startowe wspolrzedne x danego obiektu
	* Zmienna orginalPosY okresla startowe wspolrzedne y danego obiektu
	*/
	float originalPosX, originalPosY;
	/// prędkość poruszania się obiektu
	int tickrate;
};
