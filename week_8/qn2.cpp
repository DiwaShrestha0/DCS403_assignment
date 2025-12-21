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

Node* iterativeSearch(Node* root, int key) {
    while (root != nullptr) {
        if (root->data == key)
            return root;
        else if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}

int main() {
    Node* root = nullptr;

    root = insert(root, 40);
    root = insert(root, 20);
    root = insert(root, 60);
    root = insert(root, 10);

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    Node* result = iterativeSearch(root, key);

    if (result != nullptr)
        cout << "Key found in BST.";
    else
        cout << "Key not found.";

    return 0;
}
