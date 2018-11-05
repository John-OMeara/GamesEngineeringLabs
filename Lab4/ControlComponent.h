#pragma once

#include "Component.h"


/*

Used for all movement, should be named "MovementComponent"

*/

class ControlComponent : public Component
{
public:
	ControlComponent() : m_speed(1) {}

	int getSpeed() {
		return m_speed;
	}
	void setSpeed(int speed) {
		m_speed = speed;
	}

	std::string getType() {
		return "CONTROL";
	}

private:
	int m_speed;
};