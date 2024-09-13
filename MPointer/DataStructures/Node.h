#ifndef NODO_H
#define NODO_H


class Node {

public:

    int ID;
    void* memoryDir;
    int instances = 0;
    Node* next;

    Node(int ID);

    int getID();

    int addInstance();
    int removeInstance();
    int getInstances();

};

#endif //NODO_H
