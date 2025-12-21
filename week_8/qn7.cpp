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

void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        root = insert(root, value);
    }

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}
