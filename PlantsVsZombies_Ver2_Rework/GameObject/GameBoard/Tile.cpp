#include "Tile.h"
#include "../../Main/Constants.h"

Tile::Tile()
{
	m_pos = nullptr;
	m_size = nullptr;
	m_image = nullptr;
}

Tile::Tile(Point* p_pos)
{
	m_pos = p_pos;
	m_size = new TILE_SIZE;
	m_image = new Image(m_pos, m_size, TILE_GROUND_BRIGHTER_IMAGEPATH);
}

Tile::Tile(Point* p_pos, int p_num)
{
	m_pos = p_pos;
	m_size = new TILE_SIZE;

	if (p_num == 0)
		m_image = new Image(m_pos, m_size, TILE_GROUND_BRIGHTER_IMAGEPATH);
	else
		m_image = new Image(m_pos, m_size, TILE_GROUND_DARKER_IMAGEPATH);
}