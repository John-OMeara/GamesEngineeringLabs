/*
NAME:	John O'Meara
ID:		C00206417

Entity Component System
*/

//#include <SDL.h>
#include <iostream>

//#include "Game.h"
#include "Entity.h"
#include "HealthSystem.h"
#include "RenderSystem.h"
#include "ControlSystem.h"
#include "AISystem.h"

int main(int argc, char* args[])
{
	//Game game;
	//game.run();
	Entity* player = new Entity("PLAYER");
	Entity * alien = new Entity("ALIEN");
	Entity * dog = new Entity("DOG");
	Entity * cat = new Entity("CAT");

	//PositionComponent pc;

	player->addComponent(new HealthComponent());
	player->addComponent(new ControlComponent());
	player->addComponent(new PositionComponent());
	//player.addComponent(pc);

	alien->addComponent(new HealthComponent());
	alien->addComponent(new ControlComponent()); // AI uses ControlComponent, should be renamed (see header)
	alien->addComponent(new PositionComponent());

	dog->addComponent(new HealthComponent());
	dog->addComponent(new ControlComponent());
	dog->addComponent(new PositionComponent());

	cat->addComponent(new HealthComponent());
	cat->addComponent(new ControlComponent());
	cat->addComponent(new PositionComponent());


	HealthSystem hs;
	hs.addEntity(player);
	hs.addEntity(alien);
	hs.addEntity(dog);
	hs.addEntity(cat);

	RenderSystem rs;
	rs.addEntity(player);
	rs.addEntity(alien);
	rs.addEntity(dog);
	rs.addEntity(cat);

	ControlSystem cs;
	cs.addEntity(player);
	
	AISystem as;
	as.addEntity(alien);
	as.addEntity(dog);
	as.addEntity(cat);

	while (true) {
		hs.update();
		std::cout << std::endl;
		rs.update();
		std::cout << std::endl;
		cs.update(1, -1);
		std::cout << std::endl;
		as.update();
		std::cout << std::endl;

		system("PAUSE");
	}

	return 0;
}