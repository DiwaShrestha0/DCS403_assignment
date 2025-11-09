#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if(islower(ch)){
        ch=toupper(ch);
        cout<<" Uppercase:"<< ch<<endl;
    }
    else if(isupper(ch)){
        ch=tolower(ch);
        cout<<"Lowercase:"<< ch<<endl;
    }
    else{
        cout<<ch<<" is not an alphabet character"<<endl;
    }
    return 0;
}