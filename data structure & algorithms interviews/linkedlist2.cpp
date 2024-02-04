#include <iostream>

using namespace std;

class Node{
    public:
    int Value;
    Node* Next;
};

void insertHead(Node*&head, int newValue){    
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = head;
    head = newNode;
}

void insertAfter(Node*&head, int target, int newValue){
    if(head == nullptr){
        throw runtime_error("empty list");
    }

    Node* traverser = new Node();
    traverser = head;

    while(traverser != nullptr && traverser != nullptr && traverser->Value != target){
        traverser = traverser->Next;
    }

    if(traverser->Value != target){
        throw runtime_error("Target not found");
    }

    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = traverser->Next;
    traverser->Next = newNode;
}

void insertTail(Node*&head, int newValue){

}

void deleteNode(Node*&head, int target){
    if(head == nullptr){
        throw runtime_error("empty list");
    }

    Node* traverser = new Node();
    traverser = head;
    Node* runner = new Node();

    while(traverser != nullptr && traverser != nullptr && traverser->Value != target){
        runner = traverser;
        traverser = traverser->Next;
    }

    if(traverser->Value != target){
        throw runtime_error("Target not found");
    }

    runner->Next = traverser->Next;
    delete traverser;
}

void printList(Node*&head){
    Node* runner = new Node();
    runner = head;
    while(runner!=nullptr){
        cout<<runner->Value<<endl;
        runner = runner->Next;
    }

}

bool isCyle(Node*&head){
    if(head == nullptr){
        return false;
    }

    Node* fast = new Node();
    fast = head;
    Node* slow = new Node();
    slow = head;

    while(fast != nullptr && fast->Next != nullptr && fast->Value != slow->Value){
        slow = slow->Next;
        fast = fast->Next->Next;
    }

    return slow->Value == fast->Value;
}

Node* deleteRepetitions(Node*&head){
    Node* traverser = new Node();
    traverser = head;

    while(traverser != nullptr && traverser->Next != nullptr){
        if(traverser->Value == traverser->Next->Value){
            traverser->Next = traverser->Next->Next;
        }else{
            traverser = traverser->Next;
        }
    }

    return head;
}

int main(){

    Node* head = new Node();
    Node* body = new Node();
    Node* tail = new Node();

    head->Value = 1;
    body->Value = 2;
    tail->Value = 3;

    head->Next = body;
    body->Next = tail;
    tail->Next = nullptr;
    
    Node* body2 = new Node();;
    body2->Value = 5;
    body->Next = body2;
    body2->Next = tail;

    printList(head);
    cout<<endl;

    insertHead(head, -1);
    printList(head);
    cout<<endl;

    insertAfter(head, 2, 88);
    cout<<endl;
    printList(head);
    insertAfter(head, 2, 88);
    cout<<endl;
    printList(head);
    insertAfter(head, 2, 88);
    cout<<endl;
    printList(head);
    insertAfter(head, 5, 3);
    cout<<endl;
    printList(head);

    deleteNode(head,88);
    cout<<endl;
    printList(head);

    deleteRepetitions(head);
    cout<<endl;
    printList(head);

    return 0;
}