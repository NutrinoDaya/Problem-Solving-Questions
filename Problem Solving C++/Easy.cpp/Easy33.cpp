/*  C++ Program to Reverse a String using Array  */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
     char str[100],str1[100],temp;
     int i=0,j=0;

     cout<<"Enter any String : " << flush;
     cin>>str;

     strcpy(str1,str);

     j=strlen(str)-1;
     while(i<j)
    {
       temp=str[i];
       str[i]=str[j];
       str[j]=temp;
       i++;
       j--;
    }
     cout<<"After Reversing, String "<<str1<<"   is : "<<str<<" " << endl;

     return 0;
}