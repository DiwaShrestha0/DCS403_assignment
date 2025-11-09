#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch))
            result += ch;
    }

    cout << "Result: " << result << endl;
    return 0;
}
