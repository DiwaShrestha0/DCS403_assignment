#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    int pos;
    cout << "Enter position: ";
    cin >> pos;

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        Node* curr = head;
        for (int i = 1; i < pos - 1; i++) {
            curr = curr->next;
        }
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
