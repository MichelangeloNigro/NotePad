#include <iostream>
#include "NotePad.h"

int main() {
NotePad notepad;
Note note;
Note* ptr_note;
note.dat.title="pippo";
note.dat.content="\ncarmelo";
ptr_note=&note;
notepad.AddNote(ptr_note);
notepad.ReproduceNote("pippo");
return 0;
}
