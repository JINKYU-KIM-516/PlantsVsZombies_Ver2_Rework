#include "Tile.h"
#include "../../Main/Constants.h"

Tile::Tile(Point* p_pos, int p_num)
{
	Init(p_pos, p_num);
}

void Tile::Init(Point* p_pos, int p_num)
{
	m_pos = p_pos;
	m_size = new TILE_SIZE;

	if (p_num == 0)
		m_image = new ImageComponent(m_pos, m_size, TILE_GROUND_BRIGHTER_IMAGEPATH);
	else
		m_image = new ImageComponent(m_pos, m_size, TILE_GROUND_DARKER_IMAGEPATH);

	AddComponent(m_image);
}