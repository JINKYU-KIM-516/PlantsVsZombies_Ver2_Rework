#pragma once
#include "../../Component/Image.h"

class Tile
{
protected:
	Point* m_pos;
	Size* m_size;
	Image* m_image;
public:
	Tile();
	Tile(Point* p_pos);
	Tile(Point* p_pos, int p_num);
};