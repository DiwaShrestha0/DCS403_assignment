#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[50][50];

    cout << "\nEnter the matrix values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Reverse each column
    for (int j = 0; j < cols; j++) {
        int top = 0;
        int bottom = rows - 1;

        while (top < bottom) {
            swap(arr[top][j], arr[bottom][j]);
            top++;
            bottom--;
        }
    }

    cout << "\nMatrix with each column reversed:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
