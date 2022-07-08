/* C++ Program to Check whether a Number is Armstrong or not using function  */

#include <iostream>
#include <cmath>
using namespace std;

int isArmstrong(int number,double sizeofnumber) {
    int current_digit, sum = 0, num = number, number_of_digits;
    
    while (num > 0) {
        current_digit = num % 10;
     // Calculating the power of the remainder using pow() and storing in sum.
        sum = sum + pow(current_digit, sizeofnumber);
        num = num / 10;
    }
    
    // Return 1 if the number is Armstrong else return 0.
    if (sum == number) {
        return 1;
    } else {
        return 0;
    }
}
 
int main() {
    int number, isArmstrongNumber;
    cout << " Enter a positive number : " << flush;
    cin >> number;
    double sizeofnumber = trunc(log10(number)) +1;
    
    // Calling the isArmstrong function.
    isArmstrongNumber = isArmstrong(number,sizeofnumber);
    
    if (isArmstrongNumber == 1) {
        printf("%d is an Armstrong Number.", number);
    } else {
        printf("%d is not an Armstrong Number.", number);
    }
    
    return 0;
}
