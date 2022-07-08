/* C++ Program to Find Sum of n Natural Numbers using For loop  */
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int x=1,n,sum=0;
    cout << " Enter A range : " << flush;
    cin >>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout << " The sum of natural numbers to " << n << " = "<< sum << endl;
    return 0;
}