#pragma once
#include "../CoreFunction/SingletonT.h"
#include "Constants.h"
//#include "../Manager/SystemManagers/ImageResourceManager.h"
//#include "../Manager/SystemManagers/RenderManager.h"

class MainGame :public SingletonT<MainGame>
{
protected:
	//ImageResourceManager* m_imageResourceManager;
	//RenderManager* m_renderManager;
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

