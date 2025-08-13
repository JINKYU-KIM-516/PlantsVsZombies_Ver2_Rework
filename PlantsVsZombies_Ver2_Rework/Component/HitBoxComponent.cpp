#include "HitBoxComponent.h"

void HitBoxComponent::Init(int p_left, int p_top, int p_right, int p_bottom)
{
	m_left = p_left;
	m_top = p_top;
	m_right = p_right;
	m_bottom = p_bottom;
}

bool HitBoxComponent::IntersectHitBox(HitBoxComponent p_hitbox)
{
	if (m_right <= p_hitbox.m_left || m_left >= p_hitbox.m_right ||
		m_bottom <= p_hitbox.m_top || m_top >= p_hitbox.m_bottom)
	{
		return false;
	}
	return true;
}

int HitBoxComponent::GetLeft() const
{
	return m_left;
}

int HitBoxComponent::GetTop() const
{
	return m_top;
}

int HitBoxComponent::GetRight() const
{
	return m_right;
}

int HitBoxComponent::GetBottom() const
{
	return m_bottom;
}

