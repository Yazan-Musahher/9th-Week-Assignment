#include <iostream>


struct Node{
    int data;
    Node* left;
    Node* right;
};
//how to creat a new Node
Node* createNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;

}

int main () {





    return 0;
}