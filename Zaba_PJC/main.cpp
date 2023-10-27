#include <SFML/Graphics.hpp>
#include <cstdlib> 
#include <ctime>
#include "Game.h"

/**
* \mainpage
* \par Frogger
* Gra typu Frogger. Gracz sterujac zaba musi przejsc z pozycji poczatkowej do mety bez kolizji z pojazdami.
* \author Izabella Blaszkiewicz
* \date 2023.01.08
* \version 1.0
* \par Kontakt:
* \a 01150938@pw.edu.pl
*/

int main()
{

    Game Game( 1 , 100);

    Game.Loop();

    return 0;
}

