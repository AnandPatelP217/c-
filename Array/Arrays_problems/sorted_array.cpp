#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arraysize= sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr + arraysize);
        cout<<arraysize<<endl;
    for(int i=0;i<arraysize;i++){
        cout<<" i will answer "<<arr[i]<<endl;
    
    }
    return 0; 

}