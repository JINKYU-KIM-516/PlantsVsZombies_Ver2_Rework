#include "Sunlight.h"
#include "../../Component/ImageComponent.h"
#include "../../Main/Constants.h"

Sunlight::Sunlight(Point* p_pos)
{
	Init(p_pos);
}

void Sunlight::Init(Point* p_pos)
{
	m_position = p_pos;
	AddComponent(new ImageComponent(m_position, new SUNLIGHT_SIZE, SUNLIGHT_IMAGEPATH));
}