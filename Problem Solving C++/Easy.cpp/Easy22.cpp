/*  C++ Program to Convert Binary Number to Decimal  */

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    unsigned long i,n,num=0,d;
    cout<<"Enter a Binary number:" << flush;
    cin>>n;
    cout<<"The Decimal conversion of [ "<<n<<" ] is :: ";

    for(i=0;n!=0;++i)
    {
    d=n%10;
    num=(d)*(pow(2,i))+num;
    n=n/10;
    }

    cout<<num<<"\n";
    return 0;
}