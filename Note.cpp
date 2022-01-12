//
// Created by miche on 12/01/2022.
//

#include <iostream>
#include "Note.h"


void Note::show() {
    std::cout << dat.title;
    std::cout << dat.content;
    if (!dat.medias.empty()) {
        //nel caso si volesse dall ultimo al primo si fa .end poi .begin --itr
        for (auto itr=dat.medias.begin();itr!=dat.medias.end();++itr) {
            (*itr)->show();
        }
    }
}