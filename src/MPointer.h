#ifndef MPOINTER_H
#define MPOINTER_H

// Libraries and such
#include <iostream> // Debug Prints

// The class itself
template<class T>
class MPointer {

    private:
        T* ptr;

    public:
        // Constructor
        MPointer New();

        // Destructor
        ~MPointer();

        // Overloading dereferencing operator
        T& operator*();

        // Overloading arrow operator so that members of T can be accessed like a pointer
        T* operator->();

        // Overloading the assignment constructor
        MPointer& operator=(const MPointer& p);
        MPointer& operator=(T);
};

#endif //MPOINTER_H
