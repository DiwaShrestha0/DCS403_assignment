#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == SIZE - 1) {
        cout << "Queue Full\n";
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = x;
}

void display() {
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}

int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);

    display();
    return 0;
}
