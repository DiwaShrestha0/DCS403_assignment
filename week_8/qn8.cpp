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

Node* search(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
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
    int n, value, delKey, searchKey;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        root = insert(root, value);
    }

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nEnter value to delete: ";
    cin >> delKey;
    root = deleteNode(root, delKey);

    cout << "Inorder after deletion: ";
    inorder(root);

    cout << "\nEnter value to search: ";
    cin >> searchKey;

    Node* res = search(root, searchKey);

    if (res != nullptr)
        cout << "Key exists in BST";
    else
        cout << "Key NOT found in BST";

    return 0;
}
