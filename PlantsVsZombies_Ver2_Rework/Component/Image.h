#pragma once
#include <windows.h>
#pragma comment(lib, "msimg32.lib")
#include "Component.h"
#include "../CoreFunction/Point.h"
#include "../CoreFunction/Size.h"

class Image : public Component
{
protected:
	Point* m_position;
	Size* m_size;
	HBITMAP m_hBmp;
	wstring m_imagePath;

	int m_depth;
public:
	Image(Point* p_pos, Size* p_size, const wstring p_imagePath);
	Image(Point* p_pos, Size* p_size, const wstring p_imagePath, int p_depth);
	~Image();
	void Draw(HDC p_hdc);

	Point* GetPos() const;
	Size* GetSize() const;
	int GetDepth() const;

	void SetPos(Point* p_pos);
	void SetSize(Size* p_size);
	void SetImage(const wstring p_imagePath);
	void SetDapth(int p_depth);
};