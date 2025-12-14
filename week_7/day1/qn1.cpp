#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* traverse(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    return head;  
}

int main(){
    Node* head = new Node{10};
    head->next = new Node{20};
    head->next->next = new Node{30};
    head = traverse(head);

    while(head){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }

    return 0;

}