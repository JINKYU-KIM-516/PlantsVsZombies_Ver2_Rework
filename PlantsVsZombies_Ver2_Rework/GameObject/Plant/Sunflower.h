#pragma once
#include "../GameObject.h"

class Sunflower : public GameObject
{
public:
	Sunflower(Point* p_pos);
	void Init(Point* p_pos);
};

