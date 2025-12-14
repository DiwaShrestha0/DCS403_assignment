#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    int X, Y;
    cout << "Enter X and Y: ";
    cin >> X >> Y;

    Node* temp = head;
    while (temp != nullptr && temp->data != X) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        Node* newNode = new Node{Y, temp->next};
        temp->next = newNode;
    }

    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
