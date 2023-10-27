/**
* \brief klasa Drawing
* Definicja klasy rysunku
* klasa macierzysta dla klas Frog i Object
*/
#pragma once
#include <SFML/Graphics.hpp>

class Drawing
{
public:
	/**
	* \brief Konstruktor klasy Drawing
	*/
	Drawing();
	/**
	* \brief Destruktor klasy Drawing
	*/
	~Drawing();
	/**
	* \brief Metoda Draw
	* Pozwala ona na narysowanie danego obiektu w oknie
	* \param window okno gry
	*/
	void draw(sf::RenderWindow& window);
	/**
	* \brief Metoda GetShape()
	* Pozwala ona na nadanie obiektowi kształtu prostokąta
	*/
	sf::RectangleShape GetShape();

protected:
 
	/// Kształt obiektu
	sf::RectangleShape shape;
	/// Tekstura obiektu
	sf::Texture texture;

};