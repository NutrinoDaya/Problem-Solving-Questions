//C++ program to Print Multiplication Table of a given number
#include<iostream>
using namespace std;

int main()
{
    while(true){
        
        int x;
        cout << " Enter a number : " << flush; 
        cin >> x; 
        for(int i=0;i<=10;i++){
            cout << " x * "<<i<< " = " << x*i << endl;
        }
    }
}

