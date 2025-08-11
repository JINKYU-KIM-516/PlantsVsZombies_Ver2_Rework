#include "Image.h"
#include "../Manager/SystemManagers/ImageResourceManager.h"
#include "../Manager/SystemManagers/RenderManager.h"
#include "../Main/Constants.h"

Image::Image(Point p_pos, Size p_size, const wstring p_imagePath)
{
	m_position = p_pos;
	m_size = p_size;
    m_imagePath = p_imagePath;
    SetImage(m_imagePath);
    m_depth = 0;
    RenderManager::GetI()->AddImage(this);
}
Image::Image(Point p_pos, Size p_size, const wstring p_imagePath, int p_depth)
{
    m_position = p_pos;
    m_size = p_size;
    m_imagePath = p_imagePath;
    SetImage(m_imagePath);
    m_depth = p_depth;
}

Image::~Image()
{
	m_hBmp = nullptr;
}

void Image::Draw(HDC p_hdc)
{
    if (!m_hBmp) {
        MessageBox(NULL, L"Image::Draw -> 비트맵 로드 실패", L"오류", MB_OK);
        return;
    }

    BITMAP bmp;
    GetObject(m_hBmp, sizeof(BITMAP), &bmp);

    HDC hdcMem = CreateCompatibleDC(p_hdc);
    HGDIOBJ oldBmp = SelectObject(hdcMem, m_hBmp);

    TransparentBlt(p_hdc,
        m_position.GetX(), m_position.GetY(),
        m_size.GetWidth(), m_size.GetHeight(),
        hdcMem, 0, 0, bmp.bmWidth, bmp.bmHeight,
        TRANSPARENT_COLOR);

    SelectObject(hdcMem, oldBmp);
    DeleteDC(hdcMem);
}

Point Image::GetPos() const
{
	return m_position;
}

Size Image::GetSize() const
{
	return m_size;
}

int Image::GetDepth() const
{
    return m_depth;
}

void Image::SetPos(Point p_pos)
{
	m_position = p_pos;
}

void Image::SetSize(Size p_size)
{
	m_size = p_size;
}

void Image::SetImage(const wstring p_imagePath)
{
	m_hBmp = ImageResourceManager::GetI()->Load(p_imagePath);
    //m_hBmp = (HBITMAP)LoadImage(NULL, p_imagePath.c_str(), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    if (m_hBmp == nullptr) {
        MessageBox(NULL, L"Image::SetImage -> 비트맵 로드 실패", L"오류", MB_OK);
        //return;
    }
}

void Image::SetDapth(int p_depth)
{
    m_depth = p_depth;
}
