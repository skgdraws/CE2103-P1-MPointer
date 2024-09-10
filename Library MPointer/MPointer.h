#ifndef MPOINTER_H
#define MPOINTER_H

// Libraries and such
#include <iostream> // Debug Prints
#include "MPointerGC.h"

// The class itself
template<class T>
class MPointer {

    private:

        T* ptr;
        MPointerGC* garbageCollector;

    public:

        // Constructor and Destructor
        static MPointer New();
        MPointer();
        ~MPointer();

        // Overloading dereferencing operator
        T& operator*();

        // Overloading arrow operator so that members of T can be accessed like a pointer
        T* operator->();

        // Overloading the assignment constructor
        MPointer& operator=(T);
        MPointer& operator=(const MPointer& p);
};

#endif //MPOINTER_H
