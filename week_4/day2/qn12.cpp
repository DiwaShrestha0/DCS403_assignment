#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of matrix (n): ";
    cin >> n;

    int arr[50][50];

    cout << "\nEnter the matrix values:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nBoundary elements:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << arr[i][j] << " ";
        }
    }

    return 0;
}
