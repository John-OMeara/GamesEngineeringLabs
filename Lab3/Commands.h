#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>

class Command {
public:

	virtual ~Command() {};
	virtual void execute() = 0;
	virtual void undo() = 0;

protected:

	Command() {};
};

class JumpCommand : public Command {
public:

	void execute() { std::cout << "Jump" << std::endl; };
	void undo() { std::cout << "Undo Jump" << std::endl; };
};

class CrouchCommand : public Command {
public:

	void execute() { std::cout << "Crouch" << std::endl; };
	void undo() { std::cout << "Undo Crouch" << std::endl; };
};

class ShieldCommand : public Command {
public:
	void execute() { std::cout << "Shield" << std::endl; };
	void undo() { std::cout << "Undo Shield" << std::endl; };
};

class FireCommand : public Command {
public:
	void execute() { std::cout << "Fire" << std::endl; };
	void undo() { std::cout << "Undo Fire" << std::endl; };
};

class MeleeCommand : public Command {
public:
	void execute() { std::cout << "Melee" << std::endl; };
	void undo() { std::cout << "Undo Melee" << std::endl; };
};

#endif // !COMMAND_H
