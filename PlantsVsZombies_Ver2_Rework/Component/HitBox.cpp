#include "HitBox.h"

void HitBox::Init(int p_left, int p_top, int p_right, int p_bottom)
{
	m_left = p_left;
	m_top = p_top;
	m_right = p_right;
	m_bottom = p_bottom;
}

bool HitBox::IntersectHitBox(HitBox p_hitbox)
{
	if (m_right <= p_hitbox.m_left || m_left >= p_hitbox.m_right ||
		m_bottom <= p_hitbox.m_top || m_top >= p_hitbox.m_bottom)
	{
		return false;
	}
	return true;
}

int HitBox::GetLeft() const
{
	return m_left;
}

int HitBox::GetTop() const
{
	return m_top;
}

int HitBox::GetRight() const
{
	return m_right;
}

int HitBox::GetBottom() const
{
	return m_bottom;
}

