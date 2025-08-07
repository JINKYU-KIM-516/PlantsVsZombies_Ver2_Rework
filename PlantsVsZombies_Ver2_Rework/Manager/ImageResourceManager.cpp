#include "ImageResourceManager.h"

ImageResourceManager::~ImageResourceManager()
{
    for (auto& pair : imageMap) {
        delete pair.second;
    }
    imageMap.clear();
}

HBITMAP ImageResourceManager::Load(const std::wstring& p_imagePath)
{
    auto it = imageMap.find(p_imagePath);
    if (it != imageMap.end()) return it->second; 

    HBITMAP hBmp = (HBITMAP)LoadImage(NULL, p_imagePath.c_str(), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    if (hBmp)
    {
        imageMap[p_imagePath] = hBmp;
        return hBmp;
    }

    delete hBmp;
    return nullptr;
}