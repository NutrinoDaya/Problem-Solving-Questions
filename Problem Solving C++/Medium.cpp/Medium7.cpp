/* C++ Program to Swap Two String using Third variable  */

#include<iostream>
using namespace std;

int main()
{
  int i=0, j=0, k=0;
  char str1[20], str2[20], temp[20];

  cout<<"Enter the First String : " << flush;
  gets(str1);

  cout<<"Enter the Second String : " << flush;
  gets(str2);

  cout<<"Strings before swapping are : " << endl;
  cout<<"String 1 = "<<str1<<" " << endl;
  cout<<"String 2 = "<<str2<<" " << endl;
  while(str1[i]!='\0')
  {
        temp[j]=str1[i];
        i++;
        j++;
  }
  temp[j]='\0';
  i=0, j=0;
  while(str2[i]!='\0')
  {
        str1[j]=str2[i];
        i++;
        j++;
  }
  str1[j]='\0';
  i=0, j=0;
  while(temp[i]!='\0')
  {
        str2[j]=temp[i];
        i++;
        j++;
  }
  str2[j]='\0';
  cout<<"Strings after swapping : " << endl;
  cout<<"String 1 = "<<str1<<" " << endl;
  cout<<"String 2 = "<<str2<<" " << endl;

  return 0;
}