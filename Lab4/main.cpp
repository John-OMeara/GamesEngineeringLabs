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
	Entity player;

	HealthComponent hc;
	PositionComponent pc;

	player.addComponent(hc);
	player.addComponent(pc);

	HealthSystem hs;
	PositionSystem ps;
	hs.addEntity(player);
	ps.addEntity(player);

	while (true) {
		hs.update();
		ps.update();
	}

	return 0;
}