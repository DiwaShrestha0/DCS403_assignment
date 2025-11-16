#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    do {
        count++;
        n /= 10;
    } while(n != 0);

    cout << "Number of digits = " << count;
    return 0;
}
