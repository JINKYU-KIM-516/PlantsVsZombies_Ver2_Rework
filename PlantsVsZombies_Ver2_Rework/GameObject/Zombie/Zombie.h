#pragma once
#include "../GameObject.h"
#include "../../Component/ImageComponent.h"
#include "../../Component/MoveComponent.h"
#include "../../Component/HealthPointComponent.h"

class Zombie : public GameObject
{
protected:
	Point* m_pos;
	Size* m_size;

public:
	Zombie(Point* p_pos);
	~Zombie();
	void Init(Point* p_pos);
};