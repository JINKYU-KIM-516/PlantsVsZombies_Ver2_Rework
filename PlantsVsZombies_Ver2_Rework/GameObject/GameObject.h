#pragma once
#include <vector>
#include <map>
#include "../Component/Component.h"

class GameObject
{
protected:
	std::vector<Component*> m_components;
public:
	~GameObject();
	virtual void Init();
	virtual void Update();
	void AddComponent(Component* p_component);
	void DeleteComponent(Component* p_component);
};