#include "HealthSystem.h"



void HealthSystem::update()
{
	std::cout << "HealthSystem Update" << std::endl;

	for (Entity* e : m_entities)
	{
		std::vector<Component*> components = e->getComponents();

		for (Component* c : components) 
		{
			if (c->getType() == "HEALTH")
			{
				HealthComponent* hc = dynamic_cast<HealthComponent*>(c);

				int health = hc->getHealth();
				hc->setHealth(health - 1);

				std::cout << e->getName() << " health: " << hc->getHealth() << std::endl;
			}
		}
	}


}
