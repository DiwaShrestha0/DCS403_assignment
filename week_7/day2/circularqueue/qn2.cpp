#include <iostream>
using namespace std;

#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

int main() {
    int x = 10;

    if ((rear + 1) % SIZE == front)
        cout << "Queue Full";
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        cq[rear] = x;
    }

    cout << "Inserted: " << x;
    return 0;
}
