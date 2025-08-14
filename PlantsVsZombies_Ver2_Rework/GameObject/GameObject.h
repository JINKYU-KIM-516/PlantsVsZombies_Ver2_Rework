#pragma once
#include <vector>
#include "../CoreFunction/Point.h"
#include "../Component/Component.h"

class GameObject
{
protected:
	GameObject* owner = nullptr;
	std::vector<Component*> m_components;
	Point* m_position;
public:
	~GameObject();
	virtual void Init();
	virtual void Update();
	void AddComponent(Component* p_component);
	void DeleteComponent(Component* p_component);
};