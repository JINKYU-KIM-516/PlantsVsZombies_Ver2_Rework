#pragma once
#include "../GameObject.h"
#include "../../Component/Image.h"
#include "../../Component/Move.h"

class Zombie : public GameObject
{
protected:
	Point* m_pos;
	Size* m_size;
	Image* m_image;
	Move* m_move;
public:
	Zombie(Point* p_pos);
	~Zombie();
	void Init(Point* p_pos);
};