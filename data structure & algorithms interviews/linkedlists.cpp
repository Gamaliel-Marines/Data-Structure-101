#include <iostream>

using namespace std;


class NODE{
    public:
    int Value;
    NODE* Next;
};

void printList(NODE* n){
    while(n!=NULL){
        cout<<n->Value<<endl;
        n = n->Next;
    }

}

void insertFront(NODE**head, int newValue){
    NODE* newNode = new NODE();
    newNode->Value = newValue;
    newNode->Next = *head;
    *head = newNode;

}

void insertBack(NODE**tail, int newValue){
    NODE* newNode = new NODE();
    newNode->Value = newValue;
    (*tail)->Next = newNode;
    *tail = newNode;

}

void insertAfter(NODE**previous, int newValue){
    if(previous == NULL){
        cout<<"NOT POSSIBLE, CANNOT BE NULL"<<endl;
        return;
    }
    
    NODE* newNode = new NODE();
    newNode->Value = newValue; 
    newNode->Next = (*previous) ->Next;
    (*previous) -> Next = newNode;   
}
/*
1,2,3,4
delete 3
connect 2 with 4


*/

void deleteNode(NODE*&head, int target){
    if(head != NULL&&head->Value==target){
        NODE* temp = new NODE();
        temp = head;
        head = head->Next;
        
        delete temp;
        return;
    }

    NODE* current = new NODE();
    current = head;
    NODE* prev = new NODE();

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

bool detectCycle(NODE*&head){
    if(head==NULL){
        return false;
    }

    NODE* slow = head;
    NODE* fast = head;

    while(fast != NULL && fast->Value != NULL){
        slow = slow->Next;
        fast = fast->Next->Next;
        if(fast == slow){
            return true;
        }

    }
    return false;
}

int middleValue(NODE*&head){
    NODE* slow = head;
    NODE* fast = head;

    while(fast != NULL && fast->Next != NULL){
        slow = slow->Next;
        fast = fast->Next->Next;
    }

    return slow->Value;

}


int main(){

    NODE* head = new NODE();
    NODE* body = new NODE();
    NODE* tail = new NODE();

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
    cout<<"The value of the middle node of the list is : "<<middleValue(head)<<endl;

    return 0;
}