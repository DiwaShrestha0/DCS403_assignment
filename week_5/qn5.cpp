#include <iostream>
using namespace std;

int powerTail(int a, int b, int result) {
    if (b == 0) return result;
    return powerTail(a, b - 1, result * a);
}

int main() {
    int a, b;
    cout << "Enter base and power: ";
    cin >> a >> b;

    cout << powerTail(a, b, 1);
    return 0;
}

