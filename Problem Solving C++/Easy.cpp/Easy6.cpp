//Write a C++ Program to Check a number is Prime or not
#include <iostream> 
#include <cmath> 
using namespace std;
int main(){
    while(true){
        
    
    int x,y;
    cout << " Enter a number to check if it is a prime number or not  : " << flush;
    cin >> x;
    y= x/2;

 
    if(x <1){
        cout << " A prime number must be positive " << endl;
    }
    if(x ==1){
        cout << " The smallest prime number is 2 " << endl;
    }
    if(x ==2){
        cout << " The number 2 is a prime number " << endl;
    }
    if(x%2 == 0){
      cout << " The entered number ["<<x<<"] is not a prime number " << endl;
          break;
       } 
       else{
          cout << " The entered number ["<<x<<"] is a prime number " << endl;
          break;
             }
    }
    }
    
