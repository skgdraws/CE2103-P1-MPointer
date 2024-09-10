#include "Nodo.h"

Nodo::Nodo(int data){

    this -> data = data;
    this -> next = nullptr;
}

int Nodo::get_data(){

    return data;
}