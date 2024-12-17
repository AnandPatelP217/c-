#include<iostream>
using namespace std;
int main(){
    int pocketmoney = 900;
    int i;
    for(i=1;i<=30;i++){
         if(pocketmoney==0){
            break;
        }
        if(i%2==0){
            continue;
        }
       
        pocketmoney=pocketmoney-300;
     
    }
    cout<<"the day when poketmoney khatam ho jayegi"<<endl<<i<<endl;
}