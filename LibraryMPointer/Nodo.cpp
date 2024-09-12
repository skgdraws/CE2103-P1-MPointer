#include "Nodo.h"

Nodo::Nodo(int ID){

    this -> ID = ID;
    this -> next = nullptr;
}

int Nodo::get_ID(){
    return ID;
}

int Nodo::get_instances() {
    return instances;
}

void Nodo::set_instances(int data) {
    instances = data;
}
