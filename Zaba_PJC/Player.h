/**
* \brief klasa Player
* Definicja klasy gracza
*/
#pragma once
class Player
{
public:
	/**
	* \brief Konstruktor klasy Player
	*/
	Player();
	/**
	* \brief Destruktor klasy Player
	*/
	~Player();
	/**
	* \brief Metoda PlayerLostLives klasy Player
	* Metoda ta zwraca ilosc smierci (kolizji z przeszkodami) gracza
	*/
	int PlayerLostLives();
	/**
	* \brief Metoda PlayerLevel klasy Player
	* Metoda ta zwraca numer poziomu, na którym jest gracz
	*/
	int PlayerLevel();
private:
	/// ilość razy dotarcia gracza do mety (na ktorym poziomie gry sie znajduje)
	int playerWon;
	/// ilość razy zderzenia gracza z przeszkoda
	int playerDied;
};


