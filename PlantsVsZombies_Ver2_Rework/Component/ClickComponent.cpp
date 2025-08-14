#include "ClickComponent.h"
#include "../Manager/SystemManagers/InputManager.h"
void ClickComponent::Update()
{
	
}

bool ClickComponent::IsContainingMouse() const
{
	Point mousePos = InputManager::GetI()->GetMousePos();
	return (
		mousePos.GetX() >= m_pos->GetX() &&
		mousePos.GetX() <= m_pos->GetX() + m_size->GetWidth() &&
		mousePos.GetY() >= m_pos->GetY() &&
		mousePos.GetY() <= m_pos->GetY() + m_size->GetHeight()
		);
}
