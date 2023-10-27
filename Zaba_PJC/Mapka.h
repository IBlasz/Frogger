/**
* \brief klasa Mapka
* Definicja klasy mapy
* klasa odpowiada za stworzenie i rozmieszczenie przeszkód oraz mety
*/
#pragma once
#include<SFML/Graphics.hpp>
#include"Car.h"
#include"Police.h"
#include"Object.h"
#include "Meta.h"
#include "Lives.h"
#include "Levels.h"

class Mapka
{
public:
	/**
	* \brief Konstruktor klasy Mapka
	* \param size okresla wielkość okna
	*/
	Mapka(sf::Vector2u size);
	/**
	* \brief Destruktor klasy Mapka
	*/
	~Mapka();
	/**
	* \brief Metoda createEntities klasy Mapka
	* \param size określa wielkosc okna
	* pozwala na stworzenie obiektów na mapie takich jak meta, policja i samochody
	* zwraca wskaźnik do tablicy z tymi obiektami
	*/
	Object** createEntities(sf::Vector2u size);
};

