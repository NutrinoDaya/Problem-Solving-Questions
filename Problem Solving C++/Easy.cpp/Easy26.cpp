/*  C++ Program to Calculate Arithmetic Mean of N numbers  */

#include<iostream>
using namespace std;

int main()
{
        int n, Numbers[50], Sum=0;
        cout<<"How Many Numbers You Want To Enter ?  " << flush;
        cin>>n;

        cout<<"Enter "<<n<<" Numbers Below : " << endl;
        for(int i=1; i<=n; i++)
        {
            cout << "Enter [ "<<i<<" ] Number :: ";
                cin>>Numbers[i];
                Sum=Sum+ Numbers[i];
        }

        int ArethMean = Sum/n;

        cout<<"\nArithmetic Mean of [ "<<n<<" ] Numbers = "<<ArethMean<<"\n";

        return 0;
}