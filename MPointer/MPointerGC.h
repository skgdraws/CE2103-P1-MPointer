#ifndef MPOINTERGC_H
#define MPOINTERGC_H

// Libraries and such
#include <iostream> // Debug Prints
#include <mutex>
#include "DataStructures/LinkedList.h"

// The class itself
class MPointerGC {

    private:

        // A reference to itself, only one instance
        static std::mutex mtx; // Mutex for thread safety
        static MPointerGC *instance;

        // Linked List with IDs
        LinkedList pointerList;

        // Constructor and copy constructor cannot be accessed
        MPointerGC();
        MPointerGC(const MPointerGC &) = delete;

        // Cannot copy assignment
        MPointerGC &operator=(const MPointerGC &);

    public:

        // Sends memory adress of the Singleton instance
        static MPointerGC* getInstance() {

            // Acquire lock before checking instance
            std::lock_guard lock(mtx); // automatically releases lock

            if (instance == nullptr) {
                instance = new MPointerGC(); // Create the instance only once
                printf("You have created a new instance B)\n");
            }

            return instance;
        }

        // Adding and Deleting pointer instances
        int add_new_pointer(void* id);
        void increase_pointer_ref(int id);
        void decrease_pointer_ref(int id);

        // Debug Print
        void debug();
};

#endif //MPOINTERGC_H
