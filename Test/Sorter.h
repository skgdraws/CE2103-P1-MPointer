#ifndef SORTER_H
#define SORTER_H

#include <bits/stdc++.h>

class Sorter {

    private:

        static int partition(int[], int start, int end);

    public:

        Sorter();
        ~Sorter();

        static void bubbleSort(int arr[], int n);
        static void quickSort(int arr[], int start, int end);
        static void insertionSort(int arr[], int n);
};



#endif //SORTER_H
