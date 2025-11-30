#include <iostream>
using namespace std;

void reverseStr(string &s, int left, int right) {
    if (left >= right) return;
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;
    reverseStr(s, left + 1, right - 1);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    reverseStr(s, 0, s.size() - 1);
    cout << s;
    return 0;
}
