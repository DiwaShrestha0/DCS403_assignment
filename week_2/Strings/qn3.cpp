#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
using std::reverse;
int main(){
    string str,reversed_str;
    cout<<"Enter a string:";
    getline(cin,str);
    reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    if(str == reversed_str){ 
        cout<<"The string is a palindrome."<<endl;
    }
    else{
        cout<<"The string is not a palindrome."<<endl;
    }
    return 0;
}