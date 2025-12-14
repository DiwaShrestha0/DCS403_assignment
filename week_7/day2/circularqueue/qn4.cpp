#include <iostream>
using namespace std;

int cq[5] = {10, 20, 30};
int front = 0;

int main() {
    if (front == -1)
        cout << "Queue Empty";
    else
        cout << "Front element: " << cq[front];

    return 0;
}
