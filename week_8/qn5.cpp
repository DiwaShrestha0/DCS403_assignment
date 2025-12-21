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

Node* recursiveMin(Node* root) {
    if (root == nullptr || root->left == nullptr)
        return root;

    return recursiveMin(root->left);
}

Node* recursiveMax(Node* root) {
    if (root == nullptr || root->right == nullptr)
        return root;

    return recursiveMax(root->right);
}

Node* iterativeMin(Node* root) {
    while (root && root->left != nullptr)
        root = root->left;
    return root;
}

Node* iterativeMax(Node* root) {
    while (root && root->right != nullptr)
        root = root->right;
    return root;
}

int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);

    cout << "Recursive Min: " << recursiveMin(root)->data << endl;
    cout << "Recursive Max: " << recursiveMax(root)->data << endl;

    cout << "Iterative Min: " << iterativeMin(root)->data << endl;
    cout << "Iterative Max: " << iterativeMax(root)->data << endl;

    return 0;
}
