#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b;
    cout << "Enter two numbers:";
    cin >> a>>b;
    double max=fmax(a,b);
    double main=fmin(a,b);
    cout<<"Maximum ="<< max<< endl;
    cout<<"Minimum ="<< main<< endl;
    return 0;
}