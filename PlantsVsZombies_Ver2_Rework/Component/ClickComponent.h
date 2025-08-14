#pragma once
#include "Component.h"
#include "../CoreFunction/Point.h"
#include "../CoreFunction/Size.h"
class ClickComponent : public Component
{
protected:
	Point* m_pos;
	Size* m_size;
public:
	void Update() override;
	bool IsContainingMouse() const;
};

