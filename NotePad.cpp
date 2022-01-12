//
// Created by miche on 12/01/2022.
//

#include "NotePad.h"

bool NotePad::AddNote(Note* pippo) {
    noteDatas.Note.push_back(pippo);
    return true;
}

bool NotePad::RemoveNote(std::string title) {
    if (FindNote(title)!= noteDatas.Note.end())
    {
        noteDatas.Note.erase(FindNote(title));
        return true;
    }
    return  false;
}

bool NotePad::ReproduceNote(std::string title) {
    if (FindNote(title)!= noteDatas.Note.end())
    {
        (*FindNote(title))->show();
        return true;
    }
    return false;
}

std::_List_iterator<Note *> NotePad::FindNote(std::string title) {
    for (auto itr=noteDatas.Note.begin();itr!=noteDatas.Note.end();++itr){
        if( (*itr)->dat.title==title)
           return itr;
    }
    return noteDatas.Note.end();
}

