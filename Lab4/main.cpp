/*
NAME:	John O'Meara
ID:		C00206417

Entity Component System
*/

#include <SDL.h>

//#include "Game.h"
#include "Entity.h"
#include "HealthSystem.h"
#include "HealthComponent.h"

int main(int argc, char* args[])
{
	//Game game;
	//game.run();
	Entity* player = new Entity("PLAYER");

	//PositionComponent pc;

	player->addComponent(new HealthComponent());
	//player.addComponent(pc);

	HealthSystem hs;
	hs.addEntity(player);
	//ps.addEntity(player);

	while (true) {
		hs.update();
		//ps.update();
	}

	return 0;
}