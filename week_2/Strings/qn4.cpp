#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1, str2;
    cout<<"Enter 2 strings:";
    cin>>str1>>str2;
    string concatenated_str = str1 +" "+  str2;
    cout<<"Concatenated string:"<< concatenated_str << endl;
    return 0;
}