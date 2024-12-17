#include <iostream>
using namespace std;
// using namespace std;
//  -------------------Write a C++ program to check whether a given number is even or odd using the conditional statement.-------------------------------
// int main()
// {
//     int i, a;
//   cout<<"Write your are value !"<<endl;
//     cin >> a;
//   if(a%2==0){
//     cout<<"The Given Value is Even ";
//   }
//   else{
//     cout<<"The Given Value is Odd";
//   }
//     return 0;
// }

// -----------------Create a C++ program to determine the largest among three numbers using conditional statements.------------
// int main(){
//     int a , b ,c;
//     cin>>a;
//     cin>>b;
//     cin>>c;

//     if(a>b &&  a>c){
//         cout<<"A is a largest value ";
//     } else if(b>a && b>c){
//         cout<<"B is largest value";
//     }
//     else{
//         cout<<"C is a largest Value ";
//     }
//     return 0;
//     }
//   ------------------Implement a C++ program to check whether a year is a leap year or not using conditional logic.---------------------
// int main()
// {
//     int Year;
//     cout << "Enter the year ";
//     cin >> Year;
//     if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
//     {
//         cout << "Its a Leap Year ";
//     }
//     else
//     {
//         cout << "Its not a leap year ";
//     }
//     return 0;
// }


// -------------Write a C++ program to find the maximum of two numbers using conditional statements.-------------------

int main() {

    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int maxNum;
    if (num1 > num2) {
        maxNum = num1;
    } else {
        maxNum = num2;
    }

 
    cout << "The maximum of " << num1 << " and " << num2 << " is: " << maxNum << endl;

    return 0;
}