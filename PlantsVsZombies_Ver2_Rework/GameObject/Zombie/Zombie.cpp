#include "Zombie.h"

Zombie::Zombie(Point* p_pos)
{
	Init(p_pos);
}

Zombie::~Zombie()
{
	delete m_pos;
	delete m_size;
}

void Zombie::Init(Point* p_pos)
{
	m_pos = p_pos;
	m_size = new ZOMBIE_SIZE;

	AddComponent(new ImageComponent(m_pos, m_size, ZOMBIE_IMAGEPATH));
	AddComponent(new MoveComponent(m_pos, Direction::WEST, ZOMBIE_MOVESPEED));
	AddComponent(new HealthPointComponent(ZOMBIE_HEALTHPOINT));
}
