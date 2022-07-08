//C++ Write a C++ Program To Swap 2 Number Values
#include <iostream> 
using namespace std;
void swap(int&a,int&b)
{
    int t;
t=a;
a=b;
b=t;
}
int main(){
    int x,y;
    cout << " Enter The First Number : " << flush;
    cin >> x;
    cout << " Enter The Second Number : " << flush;
    cin >> y;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    }