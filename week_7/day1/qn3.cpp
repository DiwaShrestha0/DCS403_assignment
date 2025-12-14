#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};

    int x;
    cout << "Enter value to insert at end: ";
    cin >> x;

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = new Node{x, nullptr};

    printList(head);
    return 0;
}
