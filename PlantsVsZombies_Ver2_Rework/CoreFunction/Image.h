#pragma once
#include <Windows.h>
#include "Point.h"
#include "Size.h"
class Image
{
protected:
	Point m_position;
	Size m_size;

	HBITMAP m_hBmp;
	wstring m_imagePath;
public:
	Image(Point p_pos, Size p_size, const wstring p_imagePath);
	~Image();
	virtual void Draw(HDC hdc);

	Point GetPos() const;
	Size GetSize() const;

	void SetPos(Point p_pos);
	void SetSize(Size p_size);
	void SetImage(const wstring p_imagePath);
};

