#pragma once
#include "../GameObject.h"
#include "../../Component/ImageComponent.h"

class Tile : public GameObject
{
protected:
	Point* m_pos;
	Size* m_size;
	ImageComponent* m_image;
public:
	Tile(Point* p_pos, int p_num);
	void Init(Point* p_pos, int p_num);
};