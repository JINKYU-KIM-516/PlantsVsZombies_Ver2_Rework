#include "Tile.h"
#include "../../Main/Constants.h"

Tile::Tile()
{
	m_image = nullptr;
}

Tile::Tile(Point p_pos)
{
	Init(p_pos);
}

Tile::Tile(Point p_pos, int p_num)
{
	Init(p_pos, p_num);
}

void Tile::Init(Point p_pos)
{
	m_image = new Image(p_pos, TILE_SIZE, TILE_GROUND_BRIGHTER_IMAGEPATH);

}

void Tile::Init(Point p_pos, int p_num)
{
	if (p_num == 0)
		m_image = new Image(p_pos, TILE_SIZE, TILE_GROUND_BRIGHTER_IMAGEPATH);
	else
		m_image = new Image(p_pos, TILE_SIZE, TILE_GROUND_DARKER_IMAGEPATH);
}