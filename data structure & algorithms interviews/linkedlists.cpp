#include <iostream>

using namespace std;
class Node{
    public:
    int Value;
    Node* Next;
};

void printList(Node* n){
    while(n!=NULL){
        cout<<n->Value<<endl;
        n = n->Next;
    }

}

void insertHead(Node*&head, int value){
    Node* newNode = new Node();
    newNode->Value = value;
    newNode->Next = head;
    head = newNode;
}

void insertTail(Node*&head, int value){
    Node* runner = head;
    while(runner->Next!=nullptr){
        runner = runner->Next;
    }
    Node* newNode = new Node();
    newNode->Value = value;
    newNode->Next = nullptr;
    runner->Next = newNode;
}

void insertFront(Node**head, int newValue){
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = *head;
    *head = newNode;

}

void insertBack(Node**tail, int newValue){
    Node* newNode = new Node();
    newNode->Value = newValue;
    (*tail)->Next = newNode;
    *tail = newNode;

}

void insertAfter(Node**previous, int newValue){
    if(previous == NULL){
        cout<<"NOT POSSIBLE, CANNOT BE NULL"<<endl;
        return;
    }
    
    Node* newNode = new Node();
    newNode->Value = newValue; 
    newNode->Next = (*previous) ->Next;
    (*previous) -> Next = newNode;   
}

void insertAt(Node*&head, int target, int value){
    Node* traverser = head;

    if(traverser == nullptr){
        cout<<"empty list"<<endl;
    }

    while (traverser->Next != nullptr && traverser->Value != target)
    {
        traverser = traverser->Next;
    }

    if(traverser->Value != target){
        throw runtime_error("Target not found");
    }

    Node* newNode = new Node();
    newNode->Value = value;
    newNode->Next = traverser->Next;
    traverser->Next = newNode;
}

void deleteNode(Node*&head, int target){
    if(head != NULL&&head->Value==target){
        Node* temp = new Node();
        temp = head;
        head = head->Next;
        
        delete temp;
        return;
    }

    Node* current = new Node();
    current = head;
    Node* prev = new Node();

    while(current != NULL && current->Value != target){
        prev = current;
        current = current->Next;
    }

    if(current == NULL){
        cout<<"target not found"<<endl;
        return;
    }

    prev->Next=current->Next;

    delete current;
}

void eraseNode(Node*&head, int target){
    Node* traverser = head;
    Node* runner = head;

    if(traverser == nullptr){
        throw runtime_error("Empty list");
    }

    while(traverser != nullptr && traverser->Value != target){
        runner = traverser;
        traverser = traverser->Next;
    }

    if(traverser == nullptr){
        throw runtime_error("Target not found!");
    }

    runner->Next = traverser->Next;

    delete traverser;
}

bool detectCycle(Node*&head){
    if(head==NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->Value != NULL){
        slow = slow->Next;
        fast = fast->Next->Next;
        if(fast == slow){
            return true;
        }

    }
    return false;
}

bool findCycle(Node*&head){
    Node* slow = head;
    Node* fast = head;

    if(slow == nullptr){
        return false;
    }

    while(fast!=nullptr && fast->Next != nullptr && fast->Value != slow->Value){
        slow = slow->Next;
        fast = fast->Next->Next;
    }

    return slow == fast;
}

int middleValue(Node*&head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->Next != NULL){
        slow = slow->Next;
        fast = fast->Next->Next;
    }

    return slow->Value;

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
    tail->Next = NULL;

    insertFront(&head, -1);
    printList(head);
    cout<<endl;

    insertFront(&head, -2);
    printList(head);
    cout<<endl;

    insertBack(&tail, 88);
    printList(head);
    cout<<endl;

    insertAfter(&head, -4);
    printList(head);
    cout<<endl;

    int value = 0;
    cout<<"ingrese el numero que desea eliminar: ";
    cin>>value;

    deleteNode(head, value);
    printList(head);

    cout<<"The linked list is a cycle:"<<detectCycle(head)<<endl;
    printList(head);
    cout<<"The value of the middle Node of the list is : "<<middleValue(head)<<endl;

    return 0;
}