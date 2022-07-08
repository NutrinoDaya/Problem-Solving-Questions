//C++ Program to Check whether given number is Even or Odd
#include <iostream> 
#include <cmath> 
using namespace std;
int main(){
    int x;
    cout << " Enter a number to check if it is Even or Odd : " << flush;
    cin >> x;
    if(x%4 ==0){
        cout << " The number is Even " << endl;
    } else {
        cout << " The number is Odd " << endl;
    }
}