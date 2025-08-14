#pragma once
#include "../../CoreFunction/SingletonT.h"
#include "../../CoreFunction/Point.h"

class InputManager : public SingletonT<InputManager>
{
protected:
	Point m_currentMousePos;
	bool m_isLButtonClicked = false;
public:
	void Update();
	void ResetInput();

	Point GetMousePos();
	bool IsLButtonClicked();

	void SetMousePos(int p_x, int p_y);
	void LButtonClicked();
};