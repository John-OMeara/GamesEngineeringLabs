#include "RenderSystem.h"


void RenderSystem::update()
{
	std::cout << "RenderSystem Update" << std::endl;

	for (Entity* e : m_entities)
	{
		std::vector<Component*> components = e->getComponents();

		Vector pos;

		for (Component* c : components)
		{
			if (c->getType() == "POSITION")
			{
				PositionComponent* pc = dynamic_cast<PositionComponent*>(c);

				pos = pc->getPosition();
			}
		}

		std::cout << e->getName() << " rendering  at (" << pos.x << ", " << pos.y << ")" << std::endl;
	}
}
