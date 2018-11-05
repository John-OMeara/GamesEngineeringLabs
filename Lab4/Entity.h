#pragma once

#include <vector>

#include "Component.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "RenderComponent.h"
#include "ControlComponent.h"

class Entity
{
	int m_id;
	std::string m_name; //easier than ID to demo in lab

public:
	Entity(std::string name) {
		m_name = name;
	}
	Entity() {};

	void addComponent(Component* c) {
		m_components.push_back(c);
	}
	void removeComponent(Component* c) {
		// TBI
	}

	std::vector<Component*> getComponents() {
		return m_components;
	}

	std::string getName() {
		return m_name;
	}

private:
	std::vector<Component*> m_components;
};

