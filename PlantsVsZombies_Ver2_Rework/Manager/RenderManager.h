#pragma once
#include <vector>
#include "../CoreFunction/SingletonT.h"
#include "../CoreFunction/Image.h"

using namespace std;

class RenderManager : public SingletonT<RenderManager>
{
protected:
	vector<Image*> m_images;
public:
	~RenderManager();

	void Render(HDC p_hdc);

	void AddImage(Image* p_image);
	void DeleteImage(Image* p_image);
};