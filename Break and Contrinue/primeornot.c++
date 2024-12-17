
#include<iostream>
using namespace std;
int main(){
    int i;
    int a;
    cin>>a;
    for(i=2; i<a;i++){
        if(a%i==0){
            cout<<"its not a prime number  "<<endl;
            break;
        }
    }
    if(i==a){
        cout<<"its a prime number"<<endl;
    }
}