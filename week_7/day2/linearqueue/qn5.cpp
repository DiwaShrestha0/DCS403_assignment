#include <iostream>
using namespace std;

int queue[5] = {5, 10, 15, 20};
int front = 0, rear = 3;

int main() {
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";

    return 0;
}
