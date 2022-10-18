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

    Node* root = createNewNode(1);

    root->left = createNewNode(2);

    root->right = createNewNode(3);

    //new one

    root->left->left = createNewNode(4);
    root->left->right = createNewNode(5);
    root->right->left = createNewNode(5);






    return 0;
}