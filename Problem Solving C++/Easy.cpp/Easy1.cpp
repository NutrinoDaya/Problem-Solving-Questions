//C++ Program to calculate sum and average of three numbers
#include <iostream> 
using namespace std;
int main(){
    int a,b,c,sum =0,avg=0;
    cout << " Enter the first number : " << flush;
    cin >> a; 
    cout << " Enter the second number : " << flush;
    cin >>b;
    cout << " Enter the third number : " << flush;
    cin >>c;
    sum+= a+b+c; 
    avg+= sum/3;
    cout << "The sum of the three numbers  = " << sum << endl;
    cout << " The average of the three numbers = " << avg << endl;
}