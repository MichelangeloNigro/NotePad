//
// Created by miche on 12/01/2022.
//

#ifndef NOTEPAD_MULTIMEDIADOCUMENT_H
#define NOTEPAD_MULTIMEDIADOCUMENT_H


class MultimediaDocument {
public:
   /* enum type{
        img,
        video,
        audio
    };
type _type;*/
std::string path;
virtual void show()=0;

};


#endif //NOTEPAD_MULTIMEDIADOCUMENT_H
