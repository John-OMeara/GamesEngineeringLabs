#pragma once

#include <vector>
#include <iostream>
#include <string>

#include "Entity.h"

class HealthSystem
{
	std::vector<Entity*> m_entities;

public:
	void addEntity(Entity* e) {
		m_entities.push_back(e);
	}

	void update();
};

