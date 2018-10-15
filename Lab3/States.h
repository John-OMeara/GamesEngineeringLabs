#pragma once

#include <iostream>

#include "Animation.h"

class State
{
public:
	State();
	~State();

	virtual void idle(Animation* a){
		std::cout << "State::Idling" << std::endl;
	}
	virtual void jumping(Animation* a) {
		std::cout << "State::Jumping" << std::endl;
	}
	virtual void climbing(Animation* a) {
		std::cout << "State::Climbing" << std::endl;
	}
};

class Idle : public State
{
public:
	Idle();
	~Idle();

	void jumping(Animation* a);
	void climbing(Animation* a);
};

class Jumping : public State
{
public:
	Jumping();
	~Jumping();

	void idle(Animation* a);
};

class Climbing : public State
{
public:
	Climbing();
	~Climbing();

	void idle(Animation* a);
};