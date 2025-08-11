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
			Tile* tile = new Tile(Point(GAMEBOARD_START_X + x * TILE_WIDTH, GAMEBOARD_START_Y + y * TILE_HEIGHT), count % 2);
			AddTile(tile);
		}
	}
}

void GameBoardManager::AddTile(Tile* p_tile)
{
	m_tiles.push_back(p_tile);
}
