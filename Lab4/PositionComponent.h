#pragma once

#include "Component.h"

struct Vector {
	float x = 0;
	float y = 0;
};

class PositionComponent : public Component
{
public:
	std::string getType() {
		return "POSITION";
	}

	Vector getPosition() {
		return m_position;
	}
	void setPosition(float x, float y) {
		m_position.x = x;
		m_position.y = y;
	}

private:
	Vector m_position;
};