#include <iostream>
#include "NotePad.h"
#include "Video.h"
#include "Img.h"

int main() {
NotePad notepad;
Note note;
Video video1;
Img video12;

MultimediaDocument* ptr_video1;
Note* ptr_note;
MultimediaDocument* ptr_video12;

//video1._type=MultimediaDocument::video;
//video12._type=MultimediaDocument::img;


video1.lenght=3;
video1.size=3424;
video12.size=2;
note.dat.title="pippo";
note.dat.content="\ncarmelo";
video1.path="c/user/video";

ptr_video1=&video1;
ptr_video12=&video12;
ptr_note=&note;



    note.dat.medias.push_back(ptr_video1);
note.dat.medias.push_back(ptr_video12);
notepad.AddNote(ptr_note);
notepad.ReproduceNote("pippo");
return 0;
}
