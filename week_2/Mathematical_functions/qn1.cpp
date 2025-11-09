#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double n,power;
    cout<<"Number: ";
    cin>>n;
    cout<<"Square root of "<< fabs(n) << " is " << sqrt(fabs(n))<<endl;
    cout<<"Power:";
    cin>>power;
    cout<< n << " raised to the power " << power << " is " << pow(n,power)<<endl;
    cout<<"Absolute value of " << n << " is " << fabs(n) <<endl;
    return 0;
}
