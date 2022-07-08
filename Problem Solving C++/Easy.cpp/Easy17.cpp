//C++ Program to find Sum of Digits of a Number using while loop
#include <iostream>

using namespace std;

int main()
{
    int x;
    int lastD;
    int SumofDigits=0;
    cout << " Enter A Number : " << flush; 
    cin >>x;
    while(x!=0){
        lastD =x%10;
        SumofDigits +=lastD;
        x/=10;
    }
    cout << "The sum of the number's digits = "<<  SumofDigits;
}
