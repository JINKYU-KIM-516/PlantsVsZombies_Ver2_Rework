#pragma once
#include <vector>
#include "../../CoreFunction/SingletonT.h"
#include "../../GameObject/GameObject.h"

class GameObjectManager : public SingletonT<GameObjectManager>
{
protected:
	std::vector<GameObject*> m_objects;
public:
	void Init();
	void Update();

	void AddGameObject(GameObject* p_object);
};

