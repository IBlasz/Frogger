/**
* \brief klasa Game
* Definicja klasy gry
* Główna klasa wykonawcza aplikacji,
* odpowiada za stworzenie mapy, gracza, �aby i okna gry
*/
#pragma once
#include <SFML/Graphics.hpp>
#include "Frog.h"
#include "Meta.h"
#include "Object.h"
#include "Player.h"
#include "Mapka.h"
#include <thread>
#include <chrono>




class Game
{
public:
	/**
	* \brief Konstruktor klasy Game
	* \param ticks określa prsdkość wykonywania opreracji w grze (ruchów przeszkód)
	* \param FPS liczba klatek na sekundę
	*/
	Game(int ticks, int FPS);
	/**
	* \brief Destruktor klasy Game
	*/
	~Game();
	/**
	* \brief metoda Loop odpowiada za kierowanie procesami w trakcie trwania gry
	*/
	void Loop();

private:
	/// okno gry
	sf::RenderWindow* window;
	/// tablica obiektów na mapie
	Object** object;
	/// żaba poruszająca się po mapie
	Frog* frog;
	/// prędkość przeszkod w grze
	int tickrate;
	/// gracz
	Player* player;
	/// mapa gry
	Mapka* map;
	///poziom na ktorym sie znajdujemy
	int level;
	/// liczba śmierci gracza
	int deaths;


};

