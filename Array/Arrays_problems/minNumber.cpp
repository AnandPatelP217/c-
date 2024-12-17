#include<iostream>
#include<algorithm>
using namespace std ; 


int minNumberarray(int n , int arr[]){
    int min = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min; 
}
int main(){
    int arr[] = {5,6,3,5,2,4,7,6,78,4};
    int sizeOfArray=sizeof(arr)/ sizeof(arr[0]);
    int min = minNumberarray(sizeOfArray , arr);
    cout<<min; 
    
}