#include "GameObjectManager.h"
#include "../../Main/Constants.h"
#include "../../CoreFunction/Point.h"
#include "../../GameObject/GameBoard/Tile.h"
#include "../../GameObject/Zombie/Zombie.h"

void GameObjectManager::Init()
{
	//tile 积己
	int count = 0;
	for (int y = 0; y < GAMEBOARD_HEIGHT; y++)
	{
		for (int x = 0; x < GAMEBOARD_WIDTH; x++)
		{
			count++;
			Point* pos = new Point(GAMEBOARD_START_X + x * TILE_WIDTH, GAMEBOARD_START_Y + y * TILE_HEIGHT);
			Tile* tile = new Tile(pos, count % 2);
			AddGameObject(tile);
		}
		count++;
	}

	//test侩 粱厚 积己
	Point* zombiePos = new Point(GAMEBOARD_START_X + (11 * TILE_WIDTH), GAMEBOARD_START_Y + (2 * TILE_HEIGHT));
	Zombie* zombie = new Zombie(zombiePos);
	AddGameObject(zombie);
}

void GameObjectManager::Update()
{
	for (auto object : m_objects)
		object->Update();
}

void GameObjectManager::AddGameObject(GameObject* p_object)
{
	m_objects.push_back(p_object);
}
