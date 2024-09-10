#include "Lista.h"

Lista::Lista(){

    head = NULL;
}

void Lista::insertNode(int data, Nodo* memoryDir){

    *memoryDir = *new Nodo(data);
    memoryDir->next = head;
    head = memoryDir;
    std::cout << "Inserted element: " << memoryDir->get_data() << 'in ' << memoryDir << std::endl;
}

Nodo* Lista::deleteNode(int n){

    Nodo* temp = head;
    current = head;

    while(temp != NULL){

        if(temp->data == n){

            if(temp == head){

                head = head->next;
            }
            else{

                current->next = temp->next;
            }
            return temp;

        }
        else{
            current = temp;
            temp = temp->next;
        }
    }
}

void Lista::printList(){
    Nodo* node;
    node = head;

    std::cout<< "\nLinked List: ";

    while(node != NULL) {
        std::cout << node->data << " "; node = node->next;
    }
    std::cout << std::endl;
}
