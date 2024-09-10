#ifndef MPOINTERGC_H
#define MPOINTERGC_H

// Libraries and such
#include <iostream> // Debug Prints
#include <mutex>

// The class itself
class MPointerGC {

    private:

        // A reference to itself, only one instance
        static std::mutex mtx; // Mutex for thread safety
        static MPointerGC *instance;

        // Linked List with IDs

        // Constructor and copy constructor cannot be accessed
        MPointerGC();
        MPointerGC(const MPointerGC &) = delete;

        // Cannot copy assignment
        MPointerGC &operator=(const MPointerGC &);

    public:

        // Sends memory adress of the Singleton instance
        static MPointerGC* getInstance();

        // Adding and Deleting pointer instances
        void add_new_pointer(int memDir);
        void remove_new_pointer(int memDir);

        // Debug Print
        void debug();
};

#endif //MPOINTERGC_H
