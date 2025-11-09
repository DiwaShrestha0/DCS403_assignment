#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line, word;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, line);

    stringstream ss(line);
    while (ss >> word)
        count++;

    cout << "Number of words: " << count << endl;
    return 0;
}
