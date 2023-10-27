/**
* \brief klassa Levels
* Definicja klasy poziomu
* Klasa pozwala na wizualizacjê poziomu gracza
*/

#pragma once
#include <SFML/Graphics.hpp>
#include "Object.h"


class Levels : public Object
{
public:
	/**
	* \brief Konstruktor klasy Levels
	* \param posX okresla pocz¹tkowe wspó³rzêdne x kropki poziomu
	* \param posY okresla pocz¹tkowe wspó³rzêdne y kropki poziomu
	*/
	Levels(float posX, float posY);
	/*
	* @brief Destruktor klasy Levels
	*/
	~Levels();
};