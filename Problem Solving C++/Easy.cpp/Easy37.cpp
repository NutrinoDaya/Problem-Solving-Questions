/* C++ Program to Convert a Character from Uppercase to Lowercase  */
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char ch,ch1;
        cout<<"Enter any character in uppercase : " << flush;
        cin>>ch;

        ch1=ch;

        ch=ch+32;

        cout<<"Character [ "<<ch1<<" ] in lowercase = [ "<<ch<<" ] " << endl;

        return 0;
}