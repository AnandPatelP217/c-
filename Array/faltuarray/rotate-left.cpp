#include<iostream>
using namespace std;

int main(){
int n=5;

  int  arr[n];
  for(int i=0;i<5;i++){
    cout<<"enter the"<<i <<"nuber array"<<endl;
    cin>>arr[i];
  }
  int temp=arr[0];

 for(int i=1; i<5; i++){
    arr[i-1] = arr[i];


 }
   arr[n-1]=temp;
    for(int i=0;i<5;i++){
    cout<<arr[i];
    }
   return 0;
}