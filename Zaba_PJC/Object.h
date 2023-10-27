/**
* \brief klasa Object
* Definicja klasy obiektów
* Klasa Object jest klasą macierzystą dla klas Car, Police i Meta
*
*/

#pragma once
#include "Drawing.h"
#include <SFML/Graphics.hpp>
#include<iostream>
class Object : public Drawing
{
public:
	/**
	* \brief Konstruktor klasy Object
	*/
	Object();
	/**
	* \brief Dekonstruktor klasy Object
	*/
	~Object();
	/**
	* \brief Metoda wirtualna Move
	* Steruje ona poruszaniem się danego obiektu
	* \param size pozwala na okreslenie kiedy obiekt znalazł się poza oknem gry
	* \param globalTickrate steruje predkoscia wykonywania ruchów
	* jest to metoda czysto wirtualna - nie wykonuje sie w programie
	*/
	virtual void Move(sf::Vector2u size, int globalTickrate);


};


