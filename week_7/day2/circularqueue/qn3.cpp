#include <iostream>
using namespace std;

#define SIZE 5

int cq[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

int main() {
    if (front == -1)
        cout << "Queue Empty";
    else {
        cout << "Removed: " << cq[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;
    }

    return 0;
}
