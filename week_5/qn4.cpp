#include <iostream>
using namespace std;

void printArray(int arr[], int index, int n) {
    if (index == n) return;
    cout << arr[index] << " ";
    printArray(arr, index + 1, n);
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) cin >> arr[i];

    printArray(arr, 0, n);
    return 0;
}

