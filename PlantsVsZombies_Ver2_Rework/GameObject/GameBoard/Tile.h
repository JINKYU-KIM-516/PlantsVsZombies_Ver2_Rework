#pragma once
#include "../GameObject.h"
#include "../../Component/ImageComponent.h"

class Tile : public GameObject
{
public:
	Tile(Point* p_pos, int p_num);
	void Init(Point* p_pos, int p_num);
};