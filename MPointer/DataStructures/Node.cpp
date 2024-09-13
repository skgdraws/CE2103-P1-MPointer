#include "Node.h"

Node::Node(int ID){
    this -> ID = ID;
    this -> next = nullptr;
}

int Node::getID(){
    return ID;
}

int Node::addInstance() {
    instances++;
    return instances;
}
int Node::removeInstance() {
    instances--;
    return instances;
}
int Node::getInstances() {
    return instances;
}