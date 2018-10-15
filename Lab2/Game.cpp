#include "Game.h"

Game::Game()
{
	if (!init())
	{
		std::cout << "Failed to initialise" << std::endl;
	}

	m_inputHandler = new InputHandler();
}

Game::~Game()
{
	//Destroy window
	SDL_DestroyWindow(m_window);
}

void Game::run()
{
	SDL_Event e;

	bool quit = false;
	while (!quit)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
			if (e.type == SDL_KEYDOWN)
			{
				if (e.key.keysym.sym == SDLK_SPACE) {
					system("CLS");
				}
				m_inputHandler->handleInput(e);
			}
		}

		render();
	}
}

bool Game::init()
{
	//Initialize SDL
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
		success = false;
	}
	else
	{
		m_window = SDL_CreateWindow("Command Patterns", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (m_window == NULL)
		{
			std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
			success = false;
		}
		else
		{
			m_screenSurface = SDL_GetWindowSurface(m_window);
		}
	}

	return success;
}

void Game::render()
{
}
