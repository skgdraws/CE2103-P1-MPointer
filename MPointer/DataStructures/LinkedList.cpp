#include "LinkedList.h"

LinkedList::LinkedList(){
    head = nullptr;
}

void LinkedList::insertNode(int id, void* memoryDir){

    // Adding new node
    Node* temp = new Node(id);
    temp->next = head;
    head = temp;

    // Adding data inside
    head->memoryDir = memoryDir;
    head->instances++;

    std::cout << "Inserted element with ID " << head->getID() << " with " <<
    head->getInstances() << " instances" << std::endl;
}

Node* LinkedList::deleteNode(int id) {
    Node* temp = head;
    current = head;

    while(temp != nullptr){
        if(temp->ID == id){
            if(temp == head)
                head = head->next;
            else
                current->next = temp->next;
            return temp;
        }
        else{
            current = temp;
            temp = temp->next;
        }
    }
}

Node* LinkedList::getNode(int n) {
    Node* temp = head;
    current = head;

    while(temp != nullptr){
        if(temp->ID == n){
            return temp;
        }
        temp = temp->next;
    }
}

Node* LinkedList::search(int n)
{
    Node* temp = head;
    current = head;
    int counter = 0;

    while(counter <= n && temp != nullptr) {

        if(counter == n) {

            return temp;
        }

        temp = temp->next;
        counter++;

    }

}

void LinkedList::printList() {
    Node* node;
    node = head;

    std::cout<< "\nLinked List: ";

    while(node != nullptr) {
        std::cout << "Dir ID: " << node->ID << ", Instances: " << node->getInstances() << "\n";
        node = node->next;
    }
    std::cout << std::endl;
}
