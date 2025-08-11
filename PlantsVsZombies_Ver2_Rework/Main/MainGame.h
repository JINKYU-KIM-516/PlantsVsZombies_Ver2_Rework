#pragma once
#include "../CoreFunction/SingletonT.h"

class MainGame :public SingletonT<MainGame>
{
protected:
	HWND m_hWnd;
public:
	MainGame();
	MainGame(HWND p_hWnd);
	~MainGame();

	void Init(HWND p_hWnd);
	void Update();
	void ClickHandle();
	void Draw(HWND p_hWnd);

	void test();
};

