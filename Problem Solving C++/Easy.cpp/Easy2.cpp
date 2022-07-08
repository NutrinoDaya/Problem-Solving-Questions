//C++ Program to raise any number X to power N
#include <iostream> 
#include <cmath> 
using namespace std;
int main(){
      float x,n;
      cout << " Enter a number : " << flush;
      cin >>x;
      cout << " Enter a power to rise the number to it " << flush;
      cin >> n;
      cout << " The number " << x <<  " to the power " << n <<  " =  " <<pow(x,n) << endl;
      
}