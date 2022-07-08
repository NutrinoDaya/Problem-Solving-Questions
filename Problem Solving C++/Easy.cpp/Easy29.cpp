/*  C++ Program to Count Occurrences of Character in a String  */
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   int i,count=0;
   char word[50],letter;

   cout<<"Enter Any String : " << flush;
   cin>>word;

   cout<<"Enter any Character to count occurrence : " << flush;
   cin>>letter;

   for(i=0;word[i]!='\0';i++)
   {
       if(word[i]==letter)
            count++;
   }
   if(count==0)
   {
        cout<<"Given character [ "<<letter<<" ] not found." << endl;
   }
   else
   {
        cout<<"No. of Occurrences of [ " <<letter<<" ] is : "<<count<<" times." << endl;
   }

   return 0;

}