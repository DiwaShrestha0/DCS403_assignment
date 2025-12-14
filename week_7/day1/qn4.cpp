#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{20, nullptr};
    head->next = new Node{30, nullptr};

    int x;
    cout << "Enter value to insert at beginning: ";
    cin >> x;

    Node* newNode = new Node{x, head};
    head = newNode;

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
