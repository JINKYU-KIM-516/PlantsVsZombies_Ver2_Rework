#pragma once
#include "../GameObject.h"

class Zombie : public GameObject
{
public:
	Zombie(Point* p_pos);
	~Zombie();
	void Init(Point* p_pos);
};