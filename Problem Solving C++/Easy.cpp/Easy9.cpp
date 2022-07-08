/*  C++ Program to Reverse a Number using while loop  */

#include<iostream>
using namespace std;

int main()
{
    int Reverse=0,LastDigit,x;

    cout<<"Enter any positive number : " << flush;
    cin>>x;
    int Number =x;

    while(x>0)
    {
         LastDigit=x%10;
         Reverse=Reverse*10+LastDigit;
         x=x/10;
    }
    cout<<"\nReverse of a Number [ "<<Number<<" ] is : [ "<<Reverse<<" ] \n";

    return 0;
}