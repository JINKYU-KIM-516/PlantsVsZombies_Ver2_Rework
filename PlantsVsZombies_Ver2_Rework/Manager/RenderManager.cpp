#include "RenderManager.h"
#include "../CoreFunction/Image.h"

RenderManager::~RenderManager()
{
	for (auto* image : m_images)
		delete image;
}

void RenderManager::Render(HDC p_hdc)
{
	for (auto* image : m_images)
		image->Draw(p_hdc);
}

void RenderManager::AddImage(Image* p_image)
{
	m_images.push_back(p_image);
}

void RenderManager::DeleteImage(Image* p_image)
{
	m_images.erase(remove(m_images.begin(), m_images.end(), p_image), m_images.end());
	delete p_image;
}
