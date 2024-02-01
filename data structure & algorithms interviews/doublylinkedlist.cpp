#include <iostream>

using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node* previous;
};


void printForward(Node*& head){
    Node* runner=head;
    while(runner != nullptr){
        cout << runner->value;
        if (runner->next != nullptr) {
            cout << ", ";
        }
        runner = runner->next;
    }
    cout<<endl;
}

void insertFront(Node*& head, int target, int val){
    Node* runner = head;
    if (target == head->value) {
        Node* newNode = new Node();
        newNode->value = val;
        newNode->next = head;
        newNode->previous = nullptr;
        head->previous = newNode;
        head = newNode;
        return;
    }

    while (runner!=nullptr)
    {
        if(runner->value == target){
            Node* newNode = new Node();
            newNode->value = val;
            newNode->next = runner;
            newNode->previous = runner->previous;
            runner->previous->next = newNode;
            runner->previous = newNode;
            return;
        }   
        runner = runner->next;
    }
    cout<<"the target was not found"<<endl;    
}



int main(){
    Node* node = new Node();
    node->value = 1;
    node->next = nullptr;
    node->previous = nullptr;

    Node* head = node;
    Node* tail = node;
    head->next = tail;
    tail->previous = head;

    Node* newNode = new Node();
    newNode->value = 2;
    newNode->next = nullptr;
    newNode->previous = tail;
    tail->next = newNode;
    tail = newNode;

    newNode = new Node();
    newNode->value = 3;
    newNode->next = nullptr;
    newNode->previous = tail;
    tail->next = newNode;
    tail = newNode;

    newNode = new Node();
    newNode->value = 4;
    newNode->next = nullptr;
    newNode->previous = tail;
    tail->next = newNode;
    tail = newNode;

    printForward(head);

    return 0;
}