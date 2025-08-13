#include "Zombie.h"
#include "../../Component/ImageComponent.h"
#include "../../Component/MoveComponent.h"
#include "../../Component/HealthPointComponent.h"

Zombie::Zombie(Point* p_pos)
{
	Init(p_pos);
}

Zombie::~Zombie()
{

}

void Zombie::Init(Point* p_pos)
{
	m_position = p_pos;

	AddComponent(new ImageComponent(m_position, new ZOMBIE_SIZE, ZOMBIE_IMAGEPATH));
	AddComponent(new MoveComponent(m_position, Direction::WEST, ZOMBIE_MOVESPEED));
	AddComponent(new HealthPointComponent(ZOMBIE_HEALTHPOINT));
}