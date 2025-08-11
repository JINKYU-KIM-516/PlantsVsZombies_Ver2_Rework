#include "GameObjectManager.h"
#include "../../Main/Constants.h"
#include "../../CoreFunction/Point.h"
#include "../../GameObject/GameBoard/Tile.h"
#include "../../GameObject/Zombie/Zombie.h"

//protected
void GameObjectManager::CreateGameBoard()
{
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
}

void GameObjectManager::SpawnZombieRandom()
{
	if (m_zombieSpawnTimer.HasElapsed())
	{
		int row = rand() % GAMEBOARD_HEIGHT;
		int x = GAMEBOARD_START_X + (TILE_WIDTH * GAMEBOARD_WIDTH);
		int y = GAMEBOARD_START_Y + (TILE_HEIGHT * row);
		
		SpawnZombie(new Point(x, y));

		m_zombieSpawnTimer.Tick();
	}
}

//public
void GameObjectManager::Init()
{
	m_zombieSpawnTimer.Init(INTERVAL_SPAWN_ZOMBIE);
	CreateGameBoard();

	//test용 좀비 생성
	//SpawnZombie(new Point(GAMEBOARD_START_X + (11 * TILE_WIDTH), GAMEBOARD_START_Y + (2 * TILE_HEIGHT)));
}

void GameObjectManager::Update()
{
	for (auto object : m_objects)
		object->Update();
	SpawnZombieRandom();
}

void GameObjectManager::AddGameObject(GameObject* p_object)
{
	m_objects.push_back(p_object);
}

void GameObjectManager::DeleteObject(GameObject* p_object)
{
	m_objects.erase(remove(m_objects.begin(), m_objects.end(), p_object), m_objects.end());
	delete p_object;
}

void GameObjectManager::SpawnZombie(Point* p_pos)
{
	Zombie* zombie = new Zombie(p_pos);
	AddGameObject(zombie);
}
