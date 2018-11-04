#pragma once

#include "Component.h"


class HealthComponent : public Component
{
public:
	HealthComponent() : m_health(100) {}

	int getHealth() {
		return m_health;
	}
	void setHealth(int health) {
		m_health = health;
	}

	std::string getType() {
		return "HEALTH";
	}

private:
	int m_health;
};

