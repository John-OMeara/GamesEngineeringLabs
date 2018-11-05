#pragma once

#include <iostream>
#include <vector>

#include "Entity.h"

class AISystem
{
	std::vector<Entity*> m_entities;

public:
	void addEntity(Entity*e) {
		m_entities.push_back(e);
	}

	void update();
};

