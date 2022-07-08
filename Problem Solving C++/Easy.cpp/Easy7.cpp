//C++ Program to find Factorial of a Number using Recursion and Loop

#include<iostream>
using namespace std;

int main()
{
    while(true){
        
    
    long double x, fact=1;
    cout << " Enter a number : " << flush; 
    cin >>x;
    for(int i=1;i<=x;i++){
        fact*=i;
        
    }
        cout << " The Factorial of "<< x <<"  = " << flush;
            cout << fact << endl;

    }
}

