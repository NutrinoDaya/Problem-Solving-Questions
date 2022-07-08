//C++ Program to find Area and Perimeter of Rectangle

#include<iostream>
#include <cmath>
using namespace std;
void CalcRectProp(float,float,float);
int main()
{
    float Length,Width,Breadth;
    cout << " Enter The Length Of The Rectangle : " << flush;
    cin >> Length;
    cout << " Enter The Width Of The Rectangle : " << flush;
    cin >> Width;
    cout << " Enter The Breadth Of The Rectangle : " << flush;
    cin >> Breadth;
    CalcRectProp(Length,Width,Breadth);
}

void CalcRectProp(float Length, float Width,float Breadth){
    float RectArea = Length*Width;
    float RectPeri = 2*(Length+Breadth);
    cout << " The Area Of  A Rectangle with a Length of "<< Length;
    cout << " And a Width of "<< Width<<" = " << RectArea << "cm" << endl;
    ///
     cout << " The Perimeter  Of  A Rectangle with a Length of "<< Length;
    cout << " And a Breadth of "<< Breadth<<" = " << RectPeri << "cm";
    
}