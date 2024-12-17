#include<iostream>
using namespace std;

int main(){
int n=5;
int d;
cout<<"enter the value of D :"<<endl;
cin>>d;


  int  arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter the"<<i <<"nuber array"<<endl;
    cin>>arr[i];
  }
  int temp[n];
  for(int j=0;j<d;j++){
    temp[j]=arr[j];
          cout<<temp[j]<<endl;

  }

  for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
       cout<<arr[i]<<endl;
  }
  for(int i=d;i<n;i++){
    arr[i]= temp[i];
       cout<<arr[i]<<endl;
  }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    
}
return 0;
}

