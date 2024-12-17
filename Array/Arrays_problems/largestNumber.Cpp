#include<iostream>
using namespace std;
int main(){
    int n,j=0;
    cout<<"enter the size of the array : "<<endl;
    cin>>n;
    int array[n];
    cout<<"enter the array one by one :"<<endl;
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    j = array[0];
    
        for(int i=0;i<n;i++){
            
            if( array[i] > j){
j = array[i];
            }
        }
        cout<<"the largest number of the array is : "<<j<<endl;
return 0;
}