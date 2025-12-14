#include <iostream>
using namespace std;

int queue[5] = {10, 20, 30};
int front = 0, rear = 2;

int main() {
    if (front == -1 || front > rear)
        cout << "Queue Empty";
    else
        cout << "Front element: " << queue[front];

    return 0;
}
