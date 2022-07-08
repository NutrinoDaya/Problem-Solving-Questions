/*  C++ Program to Convert Decimal Number to Binary  */

#include<iostream>

using namespace std;

int main()
{
    int x,y;
    char op;
    for(int i=0;i<1;i++){
            cout << "Enter The First Numbers : " << flush;
            cin >> x;
            cout << "Enter The Second Number : " << flush;
            cin>>y;
    }
   
    cout << " Enter The Operation You Want To make : " << flush;
    cin >> op;
    
    switch(op){
    case '+' : cout << " " << x <<" + "<<y <<" = "<<x+y << endl;
        break;
    case '-' : cout << " " << x <<" - "<<y <<" = "<<x-y << endl;
        break;
    case'/' : cout << " " << x <<" / "<<y <<" = "<<x/y << endl;
        break;
    case '*' : cout << " " << x <<" * "<<y <<" = "<<x*y << endl;
        break;
        default : cout << " Error ! Please Enter A Valid Operator " << endl;
    }
    return 0;
}