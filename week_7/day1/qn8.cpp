#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{5, nullptr};
    head->next = new Node{10, nullptr};
    head->next->next = new Node{15, nullptr};

    int count = 0;
    Node* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    cout << "Number of nodes: " << count << endl;
    return 0;
}
