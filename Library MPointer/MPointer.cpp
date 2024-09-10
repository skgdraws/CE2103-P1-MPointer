#include "MPointer.h"


template<class T>
MPointer<T> MPointer<T>::New() {

    // Sending the reference to the class back to the variable
    return MPointer<T>();
}

template<class T>
MPointer<T>::MPointer() {

    // Allocating memory for the pointer itself
    ptr = new T;

    garbageCollector = MPointerGC::getInstance();
    garbageCollector->add_new_pointer(ptr);
    printf("Memory allocated for MPointer<T>: %p\n", ptr);

}

template<class T>
MPointer<T>::~MPointer() {

    garbageCollector->remove_new_pointer(ptr);
    delete (garbageCollector);
    delete (ptr);
}



template<class T>
T &MPointer<T>::operator*() {
    return *ptr;
}

template<class T>
T *MPointer<T>::operator->() {
    return ptr;
}

template<class T>
MPointer<T> & MPointer<T>::operator=(T) {
}

template<class T>
MPointer<T> & MPointer<T>::operator=(const MPointer &p) {
}


