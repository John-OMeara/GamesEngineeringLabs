#include "ControlSystem.h"


void ControlSystem::update(int dirX, int dirY)
{
	std::cout << " >>>> ControlSystem Update" << std::endl;

	for (Entity* e : m_entities)
	{
		Vector oldPos,newPos; // for output

		int speed = 0;

		std::vector<Component*> components = e->getComponents();

		for (Component* c : components)
		{
			if (c->getType() == "CONTROL")
			{
				ControlComponent* cc = dynamic_cast<ControlComponent*>(c);

				speed = cc->getSpeed();
			}
			if (c->getType() == "POSITION")
			{
				PositionComponent* pc = dynamic_cast<PositionComponent*>(c);

				oldPos = pc->getPosition();

				Vector pos = pc->getPosition();
				pc->setPosition(pos.x + (dirX*speed), pos.y + (dirY*speed));

				newPos = pc->getPosition();
			}
		}

		std::cout << e->getName() << " moved from (" << oldPos.x << ", " << oldPos.y << ") to ("
			<< newPos.x << ", " << newPos.y << ")" << std::endl;
	}
}
