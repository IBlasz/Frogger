/**
* \brief klasa Meta
* Definicja klasy mety
*/
#pragma once
#include <SFML/Graphics.hpp>
#include "Object.h"

class Meta :public Object
{
public:
	/**
	* \brief Konstruktor klasy Meta
	* \param size określa wielkość obiektu
	* \param posX określa początkowe współrzędne x obiektu
	* \param posY określa początkowe współrzędne y obiektu
	*/
	Meta(sf::Vector2u size, float MposX, float MposY);
	/**
	* \brief Destruktor klasy Meta
	*/
	~Meta();


};

