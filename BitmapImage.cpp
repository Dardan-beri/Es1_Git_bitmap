#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), depth(8) {
    buffer = new int[width * height * 3];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg" || fileExt == "png" || fileExt == "bmp" || fileExt == "jpeg" || fileExt == "gif") {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}

bool BitmapImage::save(std::string s){
    //finta implementazione
    if(s == "save")
        return true;
    return false;
}

bool BitmapImage::resize(int width, int height) {
    bool result = false;
    if(width > 0 && height > 0){
        this->width = width;
        this->height = height;
        result = true;
    }

    return result;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}
