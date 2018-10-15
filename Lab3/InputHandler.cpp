#include "InputHandler.h"


InputHandler::InputHandler()
{
	m_buttonX = new JumpCommand();
	m_buttonY = new CrouchCommand();
	m_buttonA = new ShieldCommand();
	m_buttonB = new FireCommand();

	m_buttonEnter = new MacroCommand();
	m_buttonEnter->add(m_buttonX);
	m_buttonEnter->add(m_buttonY);
	m_buttonEnter->add(m_buttonA);
	m_buttonEnter->add(m_buttonB);

	m_commands = new std::list<Command*>();
}

InputHandler::~InputHandler()
{
	while (!m_commands->empty())
	{
		delete m_commands->front();
		m_commands->pop_front();
	}
	delete m_commands;

	delete m_buttonX;
	delete m_buttonY;
	delete m_buttonA;
	delete m_buttonB;
	delete m_buttonEnter;
}

void InputHandler::handleInput(SDL_Event & e)
{
	if (e.key.keysym.sym == SDLK_x) {
		m_buttonX->execute();
		m_commands->push_back(m_buttonX);
	}
	else if (e.key.keysym.sym == SDLK_y) {
		m_buttonY->execute();
		m_commands->push_back(m_buttonY);
	}
	else if (e.key.keysym.sym == SDLK_a) {
		m_buttonA->execute();
		m_commands->push_back(m_buttonA);
	}
	else if (e.key.keysym.sym == SDLK_b) {
		m_buttonB->execute();
		m_commands->push_back(m_buttonB);
	}

	else if (e.key.keysym.sym == SDLK_RETURN)
	{
		m_buttonEnter->execute();
		m_commands->push_back(m_buttonEnter);
	}

	else if (e.key.keysym.sym == SDLK_BACKSPACE)
	{
		if (!m_commands->empty())
		{
			m_commands->back()->undo();
			m_commands->pop_back();
		}
	}

	else if (e.key.keysym.sym == SDLK_SPACE)
	{
		std::list<Command*>::iterator i = m_commands->begin();
		std::list<Command*>::iterator endIter = m_commands->end();

		for (i; i != endIter; i++)
		{
			(*i)->execute();
		}
	}
}
