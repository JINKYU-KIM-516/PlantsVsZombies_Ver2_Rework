#pragma once
#include <vector>
#include "../../CoreFunction/SingletonT.h"
#include "../../GameObject/GameObject.h"
#include "../../CoreFunction/IntervalTimer.h"

class Point;

class GameObjectManager : public SingletonT<GameObjectManager>
{
protected:
	IntervalTimer m_zombieSpawnTimer;
	std::vector<GameObject*> m_objects;

	void CreateGameBoard();
	void SpawnZombieRandom();
public:
	void Init();
	void Update();
	void AddGameObject(GameObject* p_object);
	void DeleteObject(GameObject* p_object);

	void SpawnZombie(Point* p_pos);
};

