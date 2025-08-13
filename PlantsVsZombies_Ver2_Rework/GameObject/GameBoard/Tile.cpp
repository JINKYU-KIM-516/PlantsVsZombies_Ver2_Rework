#include "Tile.h"
#include "../../Main/Constants.h"

Tile::Tile(Point* p_pos, int p_num)
{
	Init(p_pos, p_num);
}

void Tile::Init(Point* p_pos, int p_num)
{
	m_position = p_pos;
	if (p_num == 0)
		AddComponent(new ImageComponent(m_position, new TILE_SIZE, TILE_GROUND_BRIGHTER_IMAGEPATH));
	else
		AddComponent(new ImageComponent(m_position, new TILE_SIZE, TILE_GROUND_DARKER_IMAGEPATH));
}