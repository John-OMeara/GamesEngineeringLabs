#pragma once

#include "States.h"

class Animation
{
private:
	class State* m_current;

public:
	Animation();
	~Animation();


	void setCurrent(State* s) {
		m_current = s;
	}

	void idle();
	void jumping();
	void climbing();
};

