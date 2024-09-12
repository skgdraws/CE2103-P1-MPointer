#include "MPointerGC.h"


MPointerGC::MPointerGC() {

    // OK THIS THING SHOULD WORK
    printf("In MPointerGC::MPointerGC()\n");

    // Creating the pointer list
    pointerList = LinkedList();
    printf("Creating LinkedList with pointers...\n");

}


int MPointerGC::add_new_pointer(void* id) {

    int _id = 0;

    // Debug Print
    printf("You have added a pointer: " + _id);
    printf("\n");

    return _id;
}



void MPointerGC::increase_pointer_ref(int id) {

    // Debug Print
    printf("You have added a new reference to pointer: " + id);
    printf("\n");
}



void MPointerGC::decrease_pointer_ref(int id) {

    // Debug Print
    printf("You have removed a reference to pointer: " + id);
    printf("\n");
}



void MPointerGC::debug() {

    // Printing List
    printf("Printing list lol\n");
}
