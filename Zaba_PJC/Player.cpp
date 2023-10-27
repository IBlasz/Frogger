#include "Player.h"
Player::Player() {     //zainicjowanie wartości wygranych i śmierci gracza
	playerDied = 0;
	playerWon = 0;
}
Player::~Player() {

}
int Player::PlayerLostLives() {
	playerDied++;
	return playerDied;
}
int Player::PlayerLevel() {
	playerWon++;
	return playerWon;
}