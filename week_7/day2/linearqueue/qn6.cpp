#include <iostream>
using namespace std;

#define SIZE 5

int front = -1, rear = -1;

int main() {
    if (front == -1)
        cout << "Queue is Empty\n";

    if (rear == SIZE - 1)
        cout << "Queue is Full\n";

    return 0;
}
