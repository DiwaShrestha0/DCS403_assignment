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

    int x;
    cout << "Enter value to delete: ";
    cin >> x;

    if (head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        Node* curr = head;
        while (curr->next != nullptr && curr->next->data != x) {
            curr = curr->next;
        }
        if (curr->next != nullptr) {
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
