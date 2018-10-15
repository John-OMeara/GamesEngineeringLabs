#include "MacroCommand.h"



MacroCommand::MacroCommand()
{
	m_commands = new std::list<Command*>();
}


MacroCommand::~MacroCommand()
{
	while (!m_commands->empty()) 
	{
		delete m_commands->front();
		m_commands->pop_front();
	}
	delete m_commands;
}

void MacroCommand::add(Command * command)
{
	m_commands->push_back(command);
}

void MacroCommand::remove(Command * command)
{
	m_commands->remove(command);
}

void MacroCommand::execute()
{
	std::list<Command*>::iterator i = m_commands->begin();
	std::list<Command*>::iterator endIter = m_commands->end();

	for (i; i != endIter; i++)
	{
		(*i)->execute();
	}
}

void MacroCommand::undo()
{
	std::list<Command*>::iterator i = m_commands->begin();
	std::list<Command*>::iterator endIter = m_commands->end();

	for (i; i != endIter; i++)
	{
		(*i)->undo();
	}
}
