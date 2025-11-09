#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        char lower = tolower(ch);
        if (!(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u'))
            result += ch;
    }

    cout << "Result: " << result << endl;
    return 0;
}
