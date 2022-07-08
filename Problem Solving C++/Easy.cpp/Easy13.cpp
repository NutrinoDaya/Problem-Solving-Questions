//C++ program to Check whether a number is palindrome or not

#include<iostream>
using namespace std;

int main()
{
    int LastDegit,Number,SavedNumber,temp=0;

    cout<<"Enter any positive number :: ";
    cin>>Number;

    SavedNumber=Number;

    while(Number >0)
    {
        LastDegit=Number%10;
        Number=Number/10;
        temp=temp*10+LastDegit;
    }
    if(temp==SavedNumber)
    {
        
        cout<<"\nThe Number [ "<<SavedNumber<<" ] is Palindrome.\n";
        
    }
    else
    {
        cout<<"\nThe Number [ "<<SavedNumber<<" ] is Not Palindrome.\n";
    }

    return 0;
}