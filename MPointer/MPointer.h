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
        int id;

        MPointer(){

            // Creating the Garbage collector item
            id = MPointerGC::getInstance()->addNewPointer(this->ptr);

            std::cout << "MPointer ID assigned:" << id << std::endl;
        }


    public:

        // Constructor
        MPointer(const MPointer<T>& p) {

            this->ptr = p.ptr;
            this->id = p.id;

            MPointerGC::getInstance()->increasePointerRef(this->id);
            std::cout << "MPointer ID assigned:" << id << std::endl;
        }

        // Destructor
        ~MPointer() {

            MPointerGC::getInstance()->decreasePointerRef(this->id);
            std::cout << "MPointer reference removed with ID:" << this->id << std::endl;
        }

        // Static pointer instanciation
        static MPointer<T> New(){

            return MPointer<T>();
        }

        // Overloading dereferencing operator
        T& operator*() {
            return *ptr;
        }

        // Overloading dereferencing operator
        T* operator&(){
            return ptr;
        }

        // Overloading arrow operator so that members of T can be accessed like a pointer
        T* operator->(){
            return ptr;
        }

        // Overloading the assignment constructor
        MPointer<T>& operator=(const T& data){

            *ptr = data;
            return *this;
        }

        // Shallow copy Overload operator
        MPointer<T>& operator=(const MPointer& p)
        {
            if (this != &p){
                MPointerGC::getInstance()->decreasePointerRef(this->id);

                this->ptr = p.ptr;
                this->id = p.id;

                std::cout << "MPointer assigned with ID:" << this->id << std::endl;
                MPointerGC::getInstance()->increasePointerRef(this->id);
            }

            return *this;
        }
};

#endif //MPOINTER_H
