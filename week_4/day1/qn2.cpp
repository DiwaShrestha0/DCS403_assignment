#include<iostream>
using namespace std;

int main()
{
  int size;
  cout<<"Enter the array size:";
  cin>>size;
  int arr[size];
  for(int i=0; i<size;i++){
    cout<<"Enter element #"<<i+1<<":";
    cin>>arr[i];
  }
  int max=arr[0];
  for(int i=1;i<size;i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  cout<<"The Maximum Elementeis: "<<max<<endl;
  return 0;
}
