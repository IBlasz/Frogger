#include "Mapka.h"
Mapka::Mapka(sf::Vector2u size) {

	createEntities(size);                 //stworzenie obiekt�w na mapie
}
Mapka::~Mapka() {

}
Object** Mapka::createEntities(sf::Vector2u size) {


	auto entities = new Object * [16];            //stworzenie tablicy wska�nik�w do obiekt�w na mapie
	auto meta = new Meta(size, 0, 0);          //stworzenie mety
	entities[0] = meta;                        //przypisanie obiektu klasy Meta poprzez wskaznik do obietku klasy Object
	auto car1 = new Car(0, size.y -375, "images/car90x40.png");        //stworzenie samochodu
	entities[1] = car1;                        //przypisanie obiektu klasy Car poprzez wskaznik do obietku klasy Object
	auto car2 = new Car(0, size.y -225, "images/car140x40.png");        //stworzenie samochodu					   
	entities[2] = car2;                        //przypisanie obiektu klasy Car poprzez wskaznik do obietku klasy Object
	auto police = new Police(0, size.y - 300, 0.01);         //stworzenie kłody
	entities[3] = police;
	auto police2 = new Police(0, size.y - 150, 0.015);         //stworzenie kłody
	entities[4] = police2;

	auto lives5 = new Lives(size.x - 120, size.y - 20);
	auto lives4 = new Lives(size.x - 95, size.y - 20);
	auto lives3 = new Lives(size.x - 70, size.y - 20);
	auto lives2 = new Lives(size.x - 45, size.y - 20);
	auto lives1 = new Lives(size.x - 20, size.y - 20);
	entities[5] = lives1;
	entities[6] = lives2;
	entities[7] = lives3;
	entities[8] = lives4;
	entities[9] = lives5;

	auto levels5 = new Levels(size.x - 120, size.y - 50);
	auto levels4 = new Levels(size.x - 95, size.y - 50);
	auto levels3 = new Levels(size.x - 70, size.y - 50);
	auto levels2 = new Levels(size.x - 45, size.y - 50);
	auto levels1 = new Levels(size.x - 20, size.y - 50);
	entities[10] = levels1;
	entities[11] = levels2;
	entities[12] = levels3;
	entities[13] = levels4;
	entities[14] = levels5;

	return entities;                           // zwrocenie wskaznika do tablicy wskaznikow obietktow na mapie
}