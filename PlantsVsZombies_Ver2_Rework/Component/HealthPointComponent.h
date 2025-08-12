#pragma once
#include "Component.h"
class HealthPointComponent : public Component
{
protected:
	int m_healthPoint;

	bool m_isAlive;

	void CheckAlive();
public:
	HealthPointComponent(int p_hp);
	void Init(int p_hp);
	void Update() override;

	void TakeDamage(int p_damage);
	void TakeHeal(int p_damage);

	int GetHP();
	bool IsAlive();

	void SetHP(int p_hp);
};

