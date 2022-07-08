//Calculate Area of Circle using Function

#include<iostream>
#include <cmath>
#define PI 3.14159
using namespace std;
void CalcCircleArea(float);
int main()
{
    float rad;
    cout << " Enter The Radius Of The Circle : " << flush;
    cin >> rad;
    CalcCircleArea(rad);
}

void CalcCircleArea(float rad){
    float Area = PI *pow(rad,2);
    cout << " The Area Of A Circle with a radius of "<< rad<<" = " << Area;
}