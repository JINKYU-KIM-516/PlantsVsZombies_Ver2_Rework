#include "Sunflower.h"
#include "../../Component/ImageComponent.h"
#include "../../Component/HealthPointComponent.h"
#include "../../Main/Constants.h"

Sunflower::Sunflower(Point* p_pos)
{
	Init(p_pos);
}
void Sunflower::Init(Point* p_pos)
{
	m_position = p_pos;	
}