#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printReverse(Node* head) {
    if (head == nullptr)
        return;
    printReverse(head->next);
    cout << head->data << " ";
}

int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    printReverse(head);
    return 0;
}
