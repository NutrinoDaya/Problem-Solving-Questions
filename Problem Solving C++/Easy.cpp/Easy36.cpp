/*  C++ Program to Convert a String from Lowercase to Uppercase  */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
      char str[50],str1[50];
      int i;
      cout<<"Enter any String in Lowercase :: " << flush;
      gets(str);

      strcpy(str1,str);

      for(i=0;i<=strlen(str);i++)
      {
            if(str[i]>=97 && str[i]<=122)
            {
            str[i]=str[i]-32;
            }
      }
      cout<<"The String [ "<<str1<<" ] in Uppercase = [ "<<str<<" ] " << endl;

     return 0;
}