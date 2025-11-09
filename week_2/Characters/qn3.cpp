#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
    string str;
    int vowel_count=0;
    int consonant_count=0;
    cout<<"Enter a string:";
    getline(cin,str);
    for(char ch: str){
        if(isalpha(ch)){
            ch=tolower(ch);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowel_count++;
        }
        else{
                consonant_count++;
            }
        }
    }   
    cout<<"Vowels:"<<vowel_count<<endl;
    cout<<"Consonants:"<<consonant_count<<endl;
    return 0;
}