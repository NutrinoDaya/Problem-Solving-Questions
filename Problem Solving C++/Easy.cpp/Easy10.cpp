//C++ Program to Find the Number of Digits in a number
#include <iostream> 
#include <cmath> 
using namespace std;
int main(){
        double x;
        cout << " Enter a positive number : " << flush;
        cin >> x;
        double LengthOfx = trunc(log10(x)) +1;
        cout << " There are  "<< LengthOfx<< "  Digits in the number " << x << endl;
    
}
    
