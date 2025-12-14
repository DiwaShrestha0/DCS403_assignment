#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

void dequeue() {
    if (front > rear) {
        cout << "Queue Empty\n";
        return;
    }
    cout << "Removed: " << queue[front] << endl;
    front++;
}

int main() {
    dequeue();

    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";

    return 0;
}
