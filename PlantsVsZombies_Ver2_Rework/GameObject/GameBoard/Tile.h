#pragma once
#include "../../CoreFunction/Image.h"

class Tile
{
protected:
	Image* m_image;
public:
	Tile();
	Tile(Point p_pos);
	Tile(Point p_pos, int p_num);
	void Init(Point p_pos);
	void Init(Point p_pos, int p_num);
};