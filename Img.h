//
// Created by miche on 12/01/2022.
//

#ifndef NOTEPAD_IMG_H
#define NOTEPAD_IMG_H


#include "MultimediaDocument.h"

class Img: public MultimediaDocument{
public:
    float size;
    void show() override;
};


#endif //NOTEPAD_IMG_H
