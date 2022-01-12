//
// Created by miche on 12/01/2022.
//

#ifndef NOTEPAD_NOTE_H
#define NOTEPAD_NOTE_H


#include <string>
#include "MultimediaDocument.h"

class Note {

    struct data{
        std::string title;
        std::string content;
        MultimediaDocument medias[];
    };
};


#endif //NOTEPAD_NOTE_H
