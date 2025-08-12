#pragma once
#include "../GameObject.h"

class Plant : public GameObject
{
protected:
	int m_healthPoint;
	bool m_isAlive;

	void CheckAlive();
public:

};

