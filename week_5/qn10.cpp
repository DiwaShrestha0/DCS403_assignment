#include <iostream>
using namespace std;

bool isPal(string s, int left, int right) {
    if (left >= right) return true;
    if (s[left] != s[right]) return false;
    return isPal(s, left + 1, right - 1);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPal(s, 0, s.size() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
