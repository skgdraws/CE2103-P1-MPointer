#ifndef MPOINTERGB_H
#define MPOINTERGB_H

// Libraries and such
#include <iostream> // Debug Prints
#include <mutex>

// The class itself
class MPointerGB {

    private:

        // A reference to itself, only one instance
        static std::mutex mtx; // Mutex for thread safety
        static MPointerGB *instance;

        // Constructor and copy constructor cannot be accessed
        MPointerGB();
        MPointerGB(const MPointerGB &) = delete;

        // Cannot copy assignment
        MPointerGB &operator=(const MPointerGB &) = delete;

    public:

        // Sends memory adress of the Singleton instance
        static MPointerGB* getInstance();
};

#endif //MPOINTERGB_H
