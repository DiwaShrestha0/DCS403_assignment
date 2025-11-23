#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[50][50];  // enough for typical use

    cout << "\nEnter the matrix values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Reverse each row
    for (int i = 0; i < rows; i++) {
        int start = 0;
        int end = cols - 1;

        while (start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    cout << "\nMatrix with each row reversed:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
