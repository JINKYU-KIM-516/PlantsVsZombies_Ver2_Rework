#pragma once
#include <map>
#include"../CoreFunction/SingletonT.h"
using namespace std;

class ImageResourceManager : public SingletonT<ImageResourceManager>
{
protected:
	map<wstring, HBITMAP> imageMap;
public:
	~ImageResourceManager();

	HBITMAP Load(const wstring& p_imagePath);
};