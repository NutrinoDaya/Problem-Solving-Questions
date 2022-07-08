//C++ Program to Find Sum of Square of first n Natural numbers
#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout << " Enter A Number : " << flush; 
    cin >>n;
    for(int i=1;i<=n;i++){
        sum= sum + i*i;
    }
    cout << " The Sum of The square of n = " << sum << endl;
    return 0;
}