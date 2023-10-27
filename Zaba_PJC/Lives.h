/**
* \brief klassa Lives
* Definicja klasy żyć
* Klasa pozwala na wizualizację życia gracza
*/

#pragma once
#include <SFML/Graphics.hpp>
#include "Object.h"




class Lives : public Object
{
public:
	/**
	* \brief Konstruktor klasy Lives
	* \param posX okresla początkowe współrzędne x kropki życia
	* \param posY okresla początkowe współrzędne y kropki życia
	*/
	Lives(float posX, float posY);
	/**
	* \brief Destruktor klasy Lives
	*/
	~Lives();
};

