#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <vector>
#include "stdio.h"
#include "Nodo.h"

class Lista {

public:

    Nodo* head;
    Nodo* current;

    Lista();

    void insertNode(int data, Nodo* memoryDir);
    Nodo* deleteNode(int n);

    void printList();
};

#endif //LISTA_H
