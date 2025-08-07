#include "Image.h"

Image::Image(Point p_pos, Size p_size, const wstring p_imagePath)
{
	m_position = p_pos;
	m_size = p_size;
	m_imagePath = p_imagePath;
}
Image::~Image()
{

}

void Image::Draw(HDC hdc)
{

}

Point Image::GetPos() const
{
	return m_position;
}
Size Image::GetSize() const
{
	return m_size;
}

void Image::SetPos(Point p_pos)
{
}

void Image::SetSize(Size p_size)
{

}
void Image::SetImage(const wstring p_imagePath)
{

}