#ifndef NODO_H
#define NODO_H


class Node {

public:

    int ID;
    int instances = 0;
    Node* next;

    Node(int data);

    int get_ID();

    int get_instances();
    void set_instances(int data);

};

#endif //NODO_H
