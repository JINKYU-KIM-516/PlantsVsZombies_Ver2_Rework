#pragma once
#include <vector>
#include "../../CoreFunction/SingletonT.h"
#include "../../Component/ImageComponent.h"

using namespace std;

class RenderManager : public SingletonT<RenderManager>
{
protected:
	vector<ImageComponent*> m_images;
public:
	~RenderManager();

	void Render(HDC p_hdc);

	void AddImage(ImageComponent* p_image);
	void DeleteImage(ImageComponent* p_image);
};