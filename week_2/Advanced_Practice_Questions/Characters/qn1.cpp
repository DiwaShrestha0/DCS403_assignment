#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int freq[26] = {0};

    cout << "Enter a string: ";
    cin >> str;

    for (char ch : str) {
        if (isalpha(ch))
            freq[tolower(ch) - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << char('a' + i) << ":" << freq[i] << "  ";
    }

    cout << endl;
    return 0;
}
