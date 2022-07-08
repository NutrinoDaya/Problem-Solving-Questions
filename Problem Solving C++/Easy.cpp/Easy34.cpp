/*  C++ Program to Concatenate Two Strings using strcat  */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char str[50],str1[50];

        cout<<"Enter First String : " << flush;
        gets(str);
        cout<<"Enter Second String : " << flush;
        gets(str1);

        strcat(str,str1);

    cout<<"After Concatenating String is : "<<str<< endl;

    return 0;
}