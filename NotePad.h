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
        int currIndex;
        Note notes[];
    };
    bool AddNote();
    bool RemoveNote();
    bool ReproduceNote(std::string title);

};

#endif //NOTEPAD_NOTEPAD_H
