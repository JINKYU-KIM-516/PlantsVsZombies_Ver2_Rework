#pragma once
#include <vector>
#include "../../CoreFunction/SingletonT.h"
#include "../../GameObject/GameBoard/Tile.h"

class GameBoardManager : public SingletonT<GameBoardManager>
{
protected:
	vector<Tile*> m_tiles;
public:
	void Init();

	void AddTile(Tile* p_tile);
};