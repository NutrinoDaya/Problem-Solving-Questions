//C++ program to Find Largest of three numbers using nested if
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    

    int x,y,z,largest;
    cout << "Enter 3 Numbers :)) : " << flush;
    cin >> x >> y >> z;
    largest =x;
    if(x<y)
    {
        largest = y;
        if(y<z){
            largest = z;
        }
}
        cout << " The largest = " << largest << endl;

}
