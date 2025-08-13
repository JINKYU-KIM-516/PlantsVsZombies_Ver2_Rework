#pragma once
#include "Component.h"
#include "../CoreFunction/Point.h"
#include "../Main/Constants.h"

class MoveComponent : public Component
{
protected:
	Point* m_pos;
	Direction m_direction;
	int m_moveSpeed;
public:
	MoveComponent(Point* p_pos, Direction p_dir, int p_ms);
	void Init(Point* p_pos, Direction p_dir, int p_ms);
	void Update() override;
};