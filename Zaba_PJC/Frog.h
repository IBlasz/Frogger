/**
* \brief klasa Frog
* Definicja klasy żaby
*/
#pragma once
#include <SFML/Graphics.hpp>
#include "Drawing.h"


class Frog : public Drawing
{
public:
	/**
	* \brief Konstruktor klasy Frog
	* \param size pozwala ustawić pozycję początkową żaby w oknie gry
	*/
	Frog(sf::Vector2u size);
	/**
	* \brief Destruktor klasy Frog
	*/
	~Frog();
	/**
	* \brief Metoda Move klasy Frog
	* Steruje ona poruszaniem się danego obiektu
	* \param event pozwala na odczytywanie danych z klawiatury
	* slużących do sterowania kierunkiem ruchu
	*/
	void MoveFrog(sf::Event event);
	/**
	* \brief Metoda frogDies klasy Frog
	* \param size pozwala ustawić pozycję żaby na jej pozycję poczatkową
	*/
	void frogDies(sf::Vector2u size);



private:
	/// windowSize pozwalana zapisanie rozmiarów okna
	sf::Vector2u windowSize;
	sf::Sprite graphic;
	/// Klawisze sterujące żabą - góra, dół, lewo, prawo
	sf::Keyboard::Key forward = sf::Keyboard::Key::Up;
	sf::Keyboard::Key backward = sf::Keyboard::Key::Down;
	sf::Keyboard::Key left = sf::Keyboard::Key::Left;
	sf::Keyboard::Key right = sf::Keyboard::Key::Right;

};