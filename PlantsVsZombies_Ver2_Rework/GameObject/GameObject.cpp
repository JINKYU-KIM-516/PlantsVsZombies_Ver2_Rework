#include "GameObject.h"

GameObject::~GameObject()
{
	for (auto component : m_components)
		delete component;
	delete m_position;
}

void GameObject::Init()
{

}

void GameObject::Update()
{
	for (auto component : m_components)
		component->Update();
}

void GameObject::AddComponent(Component* p_component)
{
	m_components.push_back(p_component);
}

void GameObject::DeleteComponent(Component* p_component)
{
	m_components.erase(remove(m_components.begin(), m_components.end(), p_component), m_components.end());
	delete p_component;
}
