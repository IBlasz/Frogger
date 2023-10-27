#include "Game.h"

Game::Game(int ticks, int FPS)
{

	srand((unsigned)time(0));
	tickrate = ticks;// przypisanie predkosci wykonywania operacji
	window = new sf::RenderWindow(sf::VideoMode(640, 480), "Froger");// stworzenie okna gry
	window->setFramerateLimit(FPS);// ustawienie ilosci klatek wyswietlanych na sekunde
	frog = new Frog(window->getSize());// stworzenie zaby
	map = new Mapka(window->getSize());// stworzenie mapy
	object = map->createEntities((window->getSize()));// przypisanie tablicy obiektow na mapie
	player = new Player;// stworzenie gracza
	deaths = 0;

}


Game::~Game()
{
	for (int i = 0; i < 9; i++)//destrukcja wszystkich stworzonych zmiennych
		delete object[i];
	delete map, object, frog;
	delete window;
}

void Game::Loop()
{

	while (window->isOpen())
	{

		sf::Event event;

		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)             //zamkniecie okna po przez klikniecie X
				window->close();

			switch (event.type)
			{
			case sf::Event::KeyReleased:

				if (event.key.code == sf::Keyboard::Key::Escape)      //zamkniecie okna wciskajac klawisz "Escape"
					window->close();
				else
				{
					frog->MoveFrog(event);   //poruszenie zaby jesli zostala wcisnieta strzalka
				}
				
				break;


			default:
				break;
			}

		}

		window->clear();                                       //usuniecie poprzednich rysunkow z okna
		frog->draw(*window);                                   //narysowanie zaby
		for (int i = 0; i < 10 - deaths; i++)
			object[i]->draw(*window);                          //narysowanie obiektow i zyc na mapie

		for (int i = 0; i<=level; i++)
			object[i+10]->draw(*window);

		//wyświetlanie napisów na ekranie : 

		sf::Font font;
		font.loadFromFile("arial.ttf");

		sf::Text text1;
		text1.setFont(font); // Set the font
		text1.setCharacterSize(20); // Set the character size
		text1.setString("Lives : "); // Set the string
		text1.setPosition(450, 455); // Set the position on the window

		sf::Text text2;
		text2.setFont(font); // Set the font
		text2.setCharacterSize(20); // Set the character size
		text2.setString("Level : "); // Set the string
		text2.setPosition(450, 425); // Set the position on the window

		sf::Text text3;
		text3.setFont(font); // Set the font
		text3.setCharacterSize(30); // Set the character size
		text3.setString("META"); // Set the string
		text3.setFillColor(sf::Color::Red);
		text3.setPosition(285, 10); // Set the position on the window

		// Display the text on the window
		window->draw(text1);
		window->draw(text2);
		window->draw(text3);

		window->display();                                     //wyswietlenie gry


		if (frog->GetShape().getGlobalBounds().intersects(object[0]->GetShape().getGlobalBounds()))     //sprawdzenie czy gracz dotarl do mety
		{
			frog->frogDies(window->getSize());                 //przeniesienie gracza na pozycje startowa
			level = player->PlayerLevel();                     //zapisanie numeru nowego poziomu
			tickrate *= 2;                                   //zwiekszenie predkosci przeszkod w nowym poziomie
		}

		for (int i = 1; i < 5; i++) {
			object[i]->Move(window->getSize(), tickrate);          //poruszenie przeszkody na mapie

			if (frog->GetShape().getGlobalBounds().intersects(object[i]->GetShape().getGlobalBounds()))  //sprawdzenie kolizji zaby z przeszkoda
			{
				frog->frogDies(window->getSize());               //przeniesienie gracza na pozycje startowa
				deaths = player->PlayerLostLives();              //zapisanie liczby smierci gracza

			}
		}
		if (deaths == 5) {                                      //warunek przegrania gry (5 kolizji)
			window->close();                                    //zamkniecie okna
		}

		if (level == 5) {                                      //warunek wygrania gry (5 poziom�w)
			std::this_thread::sleep_for(std::chrono::seconds(2));
			window->close();                                   //zamkniecie okna
		}
	}



}
