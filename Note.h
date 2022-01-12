//
// Created by miche on 12/01/2022.
//

#ifndef NOTEPAD_NOTE_H
#define NOTEPAD_NOTE_H


#include <string>
# include "list"
#include "MultimediaDocument.h"

class Note {
public:
    struct data{
        std::string title;
        std::string content;
       std::list<MultimediaDocument*>  medias;
    };
    data dat;
    void show();
};


#endif //NOTEPAD_NOTE_H
