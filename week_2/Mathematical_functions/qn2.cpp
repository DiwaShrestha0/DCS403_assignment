#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x;
    cout<<"Enter a number in degrees:";
    cin >> x;
    double radians = x * (M_PI / 180.0); // Convert degrees to radians
    cout << "sin(" << x << ") = " << sin(radians) << endl;
    cout << "cos(" << x << ") = " << cos(radians) << endl;
    cout << "tan(" << x << ") = " << tan(radians) << endl;
    return 0;
}