#include "Zombie.h"

void Zombie::CheckAlive()
{
}

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
	m_image = new Image(m_pos, m_size, ZOMBIE_IMAGEPATH);
	m_move = new Move(m_pos, Direction::WEST, ZOMBIE_MOVESPEED);

	m_healthPoint = ZOMBIE_HEALTHPOINT;
	m_attackPower = ZOMBIE_ATTACKPOWER;
	m_attackSpeed = ZOMBIE_ATTACKSPEED;

	AddComponent(m_image);
	AddComponent(m_move);
}
