#include "MainGame.h"
#include "windowsx.h"
#include "../Component/ImageComponent.h"

#include "../Manager/SystemManagers/ImageResourceManager.h"
#include "../Manager/SystemManagers/RenderManager.h"
#include "../Manager/SystemManagers/InputManager.h"

#include "../Manager/GameObjectManagers/GameObjectManager.h"
#include "../Manager/GameObjectManagers/GameBoardManager.h"


MainGame::MainGame()
{
	m_hWnd = nullptr;
}

MainGame::MainGame(HWND p_hWnd)
{
	Init(p_hWnd);
}

MainGame::~MainGame()
{

}

void MainGame::Init(HWND p_hWnd)
{
	m_hWnd = p_hWnd;
	//m_managerManager = ManagerManager::GetI();
	//GameBoardManager::GetI()->Init();
	GameObjectManager::GetI()->Init();
}

void MainGame::Update()
{
	//m_managerManager->Update();
	GameObjectManager::GetI()->Update();
	InvalidateRect(m_hWnd, NULL, FALSE);
}

void MainGame::InputUpdate(UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_MOUSEMOVE:
		InputManager::GetI()->SetMousePos(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam));
		break;
	case WM_LBUTTONDOWN:
		InputManager::GetI()->LButtonClicked();
		break;
	}
}

void MainGame::Draw(HWND p_hWnd)
{
	PAINTSTRUCT ps;
	HDC hdc = BeginPaint(p_hWnd, &ps);

	// 1. �޸� DC ����
	HDC memDC = CreateCompatibleDC(hdc);
	RECT rect;
	GetClientRect(p_hWnd, &rect);
	int width = rect.right;
	int height = rect.bottom;

	// 2. ���ۿ� ��Ʈ�� ���� �� ����
	HBITMAP bufferBmp = CreateCompatibleBitmap(hdc, width, height);
	HBITMAP oldBmp = (HBITMAP)SelectObject(memDC, bufferBmp);

	// 3. ��� �����
	FillRect(memDC, &rect, (HBRUSH)(COLOR_WINDOW + 1));

	// 4. �޸� DC�� �׸���
	RenderManager::GetI()->Render(memDC);
	//m_managerManager->Draw(memDC);
	//DebugTextOut(memDC);

	// 5. ���� ȭ�鿡 �� ���� ���
	BitBlt(hdc, 0, 0, width, height, memDC, 0, 0, SRCCOPY);

	// 6. �ڿ� ����
	SelectObject(memDC, oldBmp);
	DeleteObject(bufferBmp);
	DeleteDC(memDC);

	EndPaint(p_hWnd, &ps);

	RenderManager::GetI()->Render(hdc);
	//m_managerManager->Draw(hdc);
}

void MainGame::test()
{
	//Image* image = new Image(Point(100, 100), Size(64,64), ZOMBIE_IMAGEPATH);
	//RenderManager::GetI()->AddImage(image);
}