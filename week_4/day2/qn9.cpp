#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    bool symmetric = true;

    cout << "Enter 9 numbers:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] != arr[j][i]) {
                symmetric = false;
            }
        }
    }

    if (symmetric)
        cout << "\nThe matrix IS symmetric.";
    else
        cout << "\nThe matrix is NOT symmetric.";
}
