#include <iostream>
using namespace std;
int main()
{
    char button;

    cin >> button;
    switch (button)
    {
        case 'g':
        cout<<"good morning" ;
        break;
        case 'b':
         cout<<"booo morning";
         break;
         case 'c':
         cout<<"cat morning" ;
        break;
         case 'n':
         cout<<"nat morning" ;
        break;
         case 'p':
         cout<<"palmag morning" ;
        break;
    default:
     cout<<"chal na bhai ";
        break;
    }
}