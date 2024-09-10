#ifndef NODO_H
#define NODO_H


class Nodo {

public:

    int data;
    Nodo* next;

    Nodo(int data);

    int get_data();

};

#endif //NODO_H
