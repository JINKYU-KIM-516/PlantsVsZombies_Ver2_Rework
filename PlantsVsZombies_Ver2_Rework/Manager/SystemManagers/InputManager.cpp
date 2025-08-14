#include "InputManager.h"
	
void InputManager::Update()
{
	ResetInput();
}

void InputManager::ResetInput()
{
	m_isLButtonClicked = false;
}

Point InputManager::GetMousePos()
{
	return m_currentMousePos;
}

bool InputManager::IsLButtonClicked()
{
	return m_isLButtonClicked;
}

void InputManager::SetMousePos(int p_x, int p_y)
{
	m_currentMousePos = Point(p_x, p_y);
}

void InputManager::LButtonClicked()
{
	m_isLButtonClicked = true;
}
