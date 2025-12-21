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

Node* iterativeInsert(Node* root, int key) {
    Node* newNode = createNode(key);

    if (root == nullptr)
        return newNode;

    Node* parent = nullptr;
    Node* temp = root;

    while (temp != nullptr) {
        parent = temp;
        if (key < temp->data)
            temp = temp->left;
        else if (key > temp->data)
            temp = temp->right;
        else
            return root;
    }

    if (key < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

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
    int n, val;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> val;
        root = iterativeInsert(root, val);
    }

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}
