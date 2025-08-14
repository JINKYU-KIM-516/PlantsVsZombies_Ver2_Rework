#pragma once
#include "../GameObject.h"

class Sunlight : public GameObject
{
public:
	Sunlight(Point* p_pos);
	void Init(Point* p_pos);
};