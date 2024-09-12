#include "Node.h"

Node::Node(int ID){

    this -> ID = ID;
    this -> next = nullptr;
}

int Node::get_ID(){
    return ID;
}

int Node::get_instances() {
    return instances;
}

void Node::set_instances(int data) {
    instances = data;
}
