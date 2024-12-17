#include<iostream>
using namespace std;
int main(){
    //taking the size of the array and then 
    int secondlargest=0,largest=0,n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int array[n];
    for(int i = 0;i<n;i++){
        cin>>array[i];
    }


    for(int i =0 ; i<n;i++){
        if(array[i]>largest){
            largest = array[i];
        }

    }
    cout<<largest<<endl<<endl;
    for(int i=0;i<n;i++){
        if(array[i]>secondlargest && array[i]!=largest)
        {
            secondlargest=array[i];

        }
    }
    cout<<secondlargest;
return 0;
}