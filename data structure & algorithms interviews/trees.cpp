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

void printDFSPreorder(Node*&root){
    if(root == nullptr) return;

    cout<<root->value;
    printDFSPreorder(root->left);
    printDFSPreorder(root->right);
}

void printDFSInorder(Node*&root){
    if(root == nullptr) return;

    printDFSInorder(root->left);
    cout<<root->value;
    printDFSInorder(root->right);
}

void printDFSPostorder(Node*&root){
    if(root == nullptr) return;

    printDFSPostorder(root->left);
    printDFSPostorder(root->right);
    cout<<root->value;
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

    //level 4
    root->right->left->left = createNewNode(9);
    root->right->left->right = createNewNode(11);

    printDFSPreorder(root);
    cout<<endl;
    printDFSInorder(root);
    cout<<endl;
    printDFSPostorder(root);


    return 0;
}
