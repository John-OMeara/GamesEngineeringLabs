#include "States.h"


/*
State
*/
State::State()
{
}

State::~State()
{
}


/*
	IDLE
*/
Idle::Idle()
{
}

Idle::~Idle()
{
}

void Idle::jumping(Animation * a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::climbing(Animation * a)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}


/*
	JUMPING
*/
Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation * a)
{
}


/*
CLIMBING
*/
Climbing::Climbing()
{
}

Climbing::~Climbing()
{
}

void Climbing::idle(Animation * a)
{
	std::cout << "Climbing to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
