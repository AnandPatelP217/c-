#include<iostream>
using namespace std;
int main(){
    int i;
    int a;
    cout<<"enter a "<<endl;
    cin>>a;
    int b;
    cout<<"enter b"<<endl;
    cin>>b;
    for(int num=a;num<b;num++){
        for(i=2;i<b;i++){
            if(num%i==0){
              break;
            }
        }
        if(num==i){
            cout<<"its a prime numbes " <<num<<endl;
        }
}
}