#include "MPointerGC.h"


MPointerGC *MPointerGC::getInstance() {

    // Acquire lock before checking instance
    std::lock_guard<std::mutex> lock(mtx); // automatically releases lock

    if (instance == nullptr) {
        instance = new MPointerGC(); // Create the instance only once
        printf("You have created a new instance B)");
    }

    return instance;
}



void MPointerGC::add_new_pointer(int memDir) {

    // Debug Print
    printf("You have added a pointer: " + memDir);
}

void MPointerGC::remove_new_pointer(int memDir) {

    // Debug Print
    printf("You have removed a pointer: " + memDir);
}

void MPointerGC::debug() {

    // Printing List
}
