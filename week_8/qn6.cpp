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

Node* findMin(Node* root) {
    while (root->left != nullptr)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    else {
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;

    root = insert(root, 60);
    root = insert(root, 40);
    root = insert(root, 80);
    root = insert(root, 30);

    cout << "Before deletion: ";
    inorder(root);

    root = deleteNode(root, 40);

    cout << "\nAfter deletion: ";
    inorder(root);

    return 0;
}
