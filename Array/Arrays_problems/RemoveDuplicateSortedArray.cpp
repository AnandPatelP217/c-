#include<iostream>
using namespace std;
int main(){

int array[5]= {1,8, 10, 45,99};
for ( int i = 0 ; i < 5; i++){
   if(array[i]>array[i]){
cout<<"sorted";
   }
   else {
      cout<<"not sorted:"; 
      break; 

   }
}






// largest and second largest 
// int largest = 0 ; 
// int secondlargest=0 ; 
// for(int i = 0 ; i<5 ; i++){
//    if(array[i] > largest ){
//        secondlargest= largest; 
//       largest = array[i] ; 
     
//    }
// }
//    cout<<largest<<secondlargest; 

return 0 ; 
    }