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
    if (it != imageMap.end())
    {
        printf("이미 LoadImage한 적 있으므로 있던걸 꺼내옵니다");
        return it->second;
    }

    HBITMAP hBmp = (HBITMAP)LoadImage(NULL, p_imagePath.c_str(), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    if (hBmp)
    {
        printf("처음 LoadImage한 것이므로 imageMap에 추가합니다");
        imageMap[p_imagePath] = hBmp;
        return hBmp;
    }

    delete hBmp;
    return nullptr;
}