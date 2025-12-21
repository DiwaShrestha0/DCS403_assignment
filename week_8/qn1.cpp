#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int key) {
    Node* node = new Node();
    node->data = key;
    node->left = node->right = nullptr;
    return node;
}

Node* insert(Node* root, int key) {
    if (root == nullptr)
        return createNode(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);

    return root;
}

Node* recursiveSearch(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return recursiveSearch(root->left, key);
    else
        return recursiveSearch(root->right, key);
}

int main() {
    Node* root = nullptr;

    root = insert(root, 40);
    root = insert(root, 20);
    root = insert(root, 50);
    root = insert(root, 10);

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    Node* result = recursiveSearch(root, key);

    if (result != nullptr)
        cout << "Key found in BST.";
    else
        cout << "Key not found in BST.";

    return 0;
}
