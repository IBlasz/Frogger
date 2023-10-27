/**
* \brief klassa Levels
* Definicja klasy poziomu
* Klasa pozwala na wizualizacj� poziomu gracza
*/

#pragma once
#include <SFML/Graphics.hpp>
#include "Object.h"


class Levels : public Object
{
public:
	/**
	* \brief Konstruktor klasy Levels
	* \param posX okresla pocz�tkowe wsp�rz�dne x kropki poziomu
	* \param posY okresla pocz�tkowe wsp�rz�dne y kropki poziomu
	*/
	Levels(float posX, float posY);
	/*
	* @brief Destruktor klasy Levels
	*/
	~Levels();
};