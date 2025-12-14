#include <iostream>
using namespace std;

#define SIZE 5

int cq[SIZE] = {10, 20, 30, 40};
int front = 0, rear = 3;

int main() {
    int i = front;
    cout << "Queue: ";
    while (true) {
        cout << cq[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    return 0;
}
