#include<iostream>
using namespace std;

int main()
{
  int arr[5];
  for(int i=0;i<5;i++){
    cout<<"Enter the element #"<<i+1<<":";
    cin>> arr[i];
  }
  for(int k=0;k<5;k++){
    cout<<arr[k]<<" ";
  }
  return 0;
}
