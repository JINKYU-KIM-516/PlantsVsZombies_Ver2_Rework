#include "MainGame.h"

MainGame::MainGame()
{
	Init(nullptr);
}

MainGame::MainGame(HWND p_hWnd)
{
	Init(p_hWnd);
	test();
}

MainGame::~MainGame()
{

}

void MainGame::Init(HWND p_hWnd)
{
	m_hWnd = p_hWnd;
	//m_managerManager = ManagerManager::GetI();
}

void MainGame::Update()
{
	//m_managerManager->Update();
	ClickHandle();
	InvalidateRect(m_hWnd, NULL, FALSE);
}

void MainGame::ClickHandle()
{
	/*
	if (m_clickOccured)
	{
		m_managerManager->ClickHandle();
		m_clickOccured = false;
	}
	*/
}

void MainGame::Draw(HWND p_hWnd)
{
	PAINTSTRUCT ps;
	HDC hdc = BeginPaint(p_hWnd, &ps);

	// 1. 메모리 DC 생성
	HDC memDC = CreateCompatibleDC(hdc);
	RECT rect;
	GetClientRect(p_hWnd, &rect);
	int width = rect.right;
	int height = rect.bottom;

	// 2. 버퍼용 비트맵 생성 및 선택
	HBITMAP bufferBmp = CreateCompatibleBitmap(hdc, width, height);
	HBITMAP oldBmp = (HBITMAP)SelectObject(memDC, bufferBmp);

	// 3. 배경 지우기
	FillRect(memDC, &rect, (HBRUSH)(COLOR_WINDOW + 1));

	// 4. 메모리 DC에 그리기
	//m_managerManager->Draw(memDC);
	//DebugTextOut(memDC);


	// 5. 실제 화면에 한 번에 출력
	BitBlt(hdc, 0, 0, width, height, memDC, 0, 0, SRCCOPY);

	// 6. 자원 정리
	SelectObject(memDC, oldBmp);
	DeleteObject(bufferBmp);
	DeleteDC(memDC);

	EndPaint(p_hWnd, &ps);
	m_managerManager->Draw(hdc);
}

void MainGame::test()
{

}