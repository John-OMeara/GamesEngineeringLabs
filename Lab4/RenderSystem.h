#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Entity.h"

class RenderSystem
{
	std::vector<Entity*> m_entities;

public:
	void addEntity(Entity* e) {
		m_entities.push_back(e);
	}

	void update();
};

