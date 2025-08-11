#include "GameBoardManager.h"
#include "../../Main/Constants.h"
void GameBoardManager::Init()
{
	int count = 0;
	for (int y = 0; y < GAMEBOARD_HEIGHT; y++)
	{
		for (int x = 0; x < GAMEBOARD_WIDTH; x++)
		{
			count++;
			Point* pos = new Point(GAMEBOARD_START_X + x * TILE_WIDTH, GAMEBOARD_START_Y + y * TILE_HEIGHT);
			Tile* tile = new Tile(pos, count % 2);
			AddTile(tile);
		}
		count++;
	}
}

void GameBoardManager::AddTile(Tile* p_tile)
{
	m_tiles.push_back(p_tile);
}
