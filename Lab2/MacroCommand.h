#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include <list>

#include "Commands.h"


class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();

	virtual void add(Command* command);
	virtual void remove(Command* command);
	virtual void execute();

	virtual void undo();

private:
	std::list<Command*>* m_commands;
};

#endif // !MACROCOMMAND_H