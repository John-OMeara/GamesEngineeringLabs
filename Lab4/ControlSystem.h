#pragma once

#include <iostream>
#include <vector>

#include "Entity.h"

/*

Used for all movement, should be named "MovementComponent"

*/

class ControlSystem
{
	std::vector<Entity*> m_entities;

public:

	void addEntity(Entity* e) {
		m_entities.push_back(e);
	}

	void update(int dirX, int dirY);
};

