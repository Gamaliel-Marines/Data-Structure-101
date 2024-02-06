#include <iostream>

using namespace std;


struct Node
{
    int value;
    Node* left;
    Node* right;
};

Node* createNewNode(int val){
    Node* newNode = new Node();
    newNode->value = val;
    newNode->left = newNode->right = nullptr;

    return newNode;
}

int main(){
    //level 1
    Node* root = createNewNode(1);
    
    //level 2
    root->left = createNewNode(2);
    root->right = createNewNode(3);
    
    //level 3
    root->left->left = createNewNode(4);
    root->left->right = createNewNode(5);

    root->right->left = createNewNode(6);
    root->right->right = createNewNode(7);


    return 0;
}
