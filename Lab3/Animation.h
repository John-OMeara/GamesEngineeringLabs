#pragma once

#include "States.h"

class Animation
{
private:
	class State* m_current;
	class State* m_previous;

public:
	Animation();
	~Animation();

	void setCurrent(State* s) {
		m_current = s;
	}
	void setPrevious(State* s) {
		m_previous = s;
	}

	State* getCurrent() {
		return m_current;
	}
	State* getPrevious() {
		return m_previous;
	}

	void idle();
	void jumping();
	void climbing();
};

