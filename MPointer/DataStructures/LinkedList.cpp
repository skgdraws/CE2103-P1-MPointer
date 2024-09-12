#include "LinkedList.h"

LinkedList::LinkedList(){

    head = nullptr;
}

void LinkedList::insertNode(int data, Node* memoryDir){

    *memoryDir = *new Node(data);
    memoryDir->next = head;
    head = memoryDir;
    std::cout << "Inserted element: " << memoryDir->get_ID() << 'in ' << memoryDir << std::endl;
}

Node* LinkedList::deleteNode(int n){

    Node* temp = head;
    current = head;

    while(temp != nullptr){

        if(temp->ID == n){

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

void LinkedList::printList(){
    Node* node;
    node = head;

    std::cout<< "\nLinked List: ";

    while(node != nullptr) {
        std::cout << "Dir ID: " << node->ID << ", Instances: " << node->get_instances() << " ";
        node = node->next;
    }
    std::cout << std::endl;
}
