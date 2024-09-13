#include "MPointerGC.h"


MPointerGC::MPointerGC() {

    // OK THIS THING SHOULD WORK
    printf("In MPointerGC::MPointerGC()\n");

    // Setting the Random Seed
    std::srand(std::time(nullptr));

    // Creating the pointer list
    pointerList = LinkedList();
    printf("Creating LinkedList with pointers...\n");

}

template <class T>
int MPointerGC::addNewPointer(T* ptr) {

    int _id = std::rand() % 100000;

    // Starting from here we insert the nodes inside the list
    pointerList.insertNode(_id, ptr);

    // Debug Print
    printf("You have added a pointer: " + _id);
    printf("\n");

    return _id;
}


void MPointerGC::increasePointerRef(int id) {

    pointerList.getNode(id)->addInstance();

    // Debug Print
    printf("You have added a new reference to pointer: " + id);
    printf("\n");
}


void MPointerGC::decreasePointerRef(int id) {

    pointerList.getNode(id)->removeInstance();

    // Debug Print
    printf("You have removed a reference to pointer: " + id);
    printf("\n");
}


void MPointerGC::debug() {

    // Printing List
    pointerList.printList();
}
