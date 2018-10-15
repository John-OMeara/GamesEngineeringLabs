#include "Animation.h"



Animation::Animation()
{
	m_current = new Idle();
}


Animation::~Animation()
{
}

void Animation::idle()
{
	m_current->idle(this);
}

void Animation::jumping()
{
	m_current->jumping(this);
}

void Animation::climbing()
{
	m_current->climbing(this);
}
