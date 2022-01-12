//
// Created by miche on 12/01/2022.
//

#ifndef NOTEPAD_AUDIO_H
#define NOTEPAD_AUDIO_H


#include "MultimediaDocument.h"

class Audio: public MultimediaDocument{
public:
    float lenght;
    void show() override;
};


#endif //NOTEPAD_AUDIO_H
