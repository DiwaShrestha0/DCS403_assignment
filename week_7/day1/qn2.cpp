#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* findX(Node* head, int x){
    Node* current = head;
    int index = 0;
    while(current != nullptr){
        if(current->data == x){
            cout<<"Found at index:"<<index<<endl;

        }
        current = current-> next;
        index++;
    } 
    return head;   
}

int main(){
    Node* head = new Node{10};
    head->next = new Node{20};
    head->next->next = new Node{30};
    findX(head, 10);
    
    while(head){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
    return 0;
}
