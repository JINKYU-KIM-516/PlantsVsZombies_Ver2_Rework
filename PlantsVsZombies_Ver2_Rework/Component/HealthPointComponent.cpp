#include "HealthPointComponent.h"

void HealthPointComponent::CheckAlive()
{
	if (m_healthPoint <= 0)
		m_isAlive = false;
}

HealthPointComponent::HealthPointComponent(int p_hp)
{
	Init(p_hp);
}

void HealthPointComponent::Init(int p_hp)
{
	m_healthPoint = p_hp;
	m_isAlive = true;
}

void HealthPointComponent::Update()
{
	CheckAlive();
}

void HealthPointComponent::TakeDamage(int p_damage)
{
	m_healthPoint -= p_damage;
}

void HealthPointComponent::TakeHeal(int p_damage)
{
	m_healthPoint += p_damage;
}

int HealthPointComponent::GetHP() const
{
	return m_healthPoint;
}

bool HealthPointComponent::IsAlive() const
{
	return m_isAlive;
}

void HealthPointComponent::SetHP(int p_hp)
{
	m_healthPoint = p_hp;
}
