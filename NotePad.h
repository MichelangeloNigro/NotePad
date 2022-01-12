//
// Created by miche on 12/01/2022.
//

#ifndef NOTEPAD_NOTEPAD_H
#define NOTEPAD_NOTEPAD_H
#include "string"
#include "Note.h"

class NotePad {
public:
    struct datas { ;
       std::list<Note*> Note ;
    };
    datas noteDatas;
    bool AddNote(Note* pippo);
    bool RemoveNote(std::string title);
    bool ReproduceNote(std::string title);
    std::_List_iterator<Note *> FindNote(std::string title);

};

#endif //NOTEPAD_NOTEPAD_H
