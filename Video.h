//
// Created by miche on 12/01/2022.
//

#ifndef NOTEPAD_VIDEO_H
#define NOTEPAD_VIDEO_H


#include "MultimediaDocument.h"

class Video: public MultimediaDocument {
public:
    float size;
    float lenght;
    void show() override;

};


#endif //NOTEPAD_VIDEO_H
