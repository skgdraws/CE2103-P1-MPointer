#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Node.h"


class LinkedList
{
public:

    Node* head;
    Node* current;

    LinkedList();

    void insertNode(int id, void* memoryDir);
    Node* deleteNode(int n);

    Node* getNode(int id);
    Node* search(int n);
    void printList();
};

#endif //LISTA_H
