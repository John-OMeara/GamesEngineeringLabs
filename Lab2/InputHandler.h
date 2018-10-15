#pragma once

#include <SDL.h>

#include "Commands.h"
#include "MacroCommand.h"

class InputHandler
{
public:
	InputHandler();
	~InputHandler();

	void handleInput(SDL_Event & e);

private:

	Command* m_buttonX;
	Command* m_buttonY;
	Command* m_buttonA;
	Command* m_buttonB;

	MacroCommand* m_buttonEnter;

	std::list<Command*>* m_commands;
};

