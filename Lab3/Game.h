#ifndef GAME
#define	GAME

#include <SDL.h>
#include <iostream>

#include "Commands.h"
#include "InputHandler.h"
#include "Animation.h"

class Game
{
public:
	Game();
	~Game();

	void run();

	SDL_Window* m_window = NULL;

private:

	bool init();
	void render();

	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

	SDL_Surface* m_screenSurface = NULL;

	InputHandler* m_inputHandler;
	Animation fsm;
};


#endif
