#include "MoveComponent.h"

MoveComponent::MoveComponent(Point* p_pos, Direction p_dir, int p_ms)
{
	Init(p_pos, p_dir, p_ms);
}

void MoveComponent::Init(Point* p_pos, Direction p_dir, int p_ms)
{
	m_pos = p_pos;
	m_direction = p_dir;
	m_moveSpeed = p_ms;
}

void MoveComponent::Update()
{
	if (m_pos == nullptr)
		return;
	switch (m_direction)
	{
	case Direction::EAST:
		m_pos->IncreaseX(m_moveSpeed);
		break;
	case Direction::WEST:
		m_pos->DecreaseX(m_moveSpeed);
		break;
	case Direction::SOUTH:
		m_pos->IncreaseY(m_moveSpeed);
		break;
	case Direction::NORTH:
		m_pos->DecreaseY(m_moveSpeed);
		break;
	default:
		break;
	}
}
