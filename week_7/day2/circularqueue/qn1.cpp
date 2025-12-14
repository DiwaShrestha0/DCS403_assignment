#include <iostream>
using namespace std;

#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue Full\n";
        return;
    }
    if (front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    cq[rear] = x;
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Empty\n";
        return;
    }
    cout << "Deleted: " << cq[front] << endl;
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

void display() {
    if (front == -1) {
        cout << "Queue Empty\n";
        return;
    }
    int i = front;
    cout << "Queue: ";
    while (true) {
        cout << cq[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();

    return 0;
}
