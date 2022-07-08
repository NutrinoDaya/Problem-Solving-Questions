/*  C++ Program to implement Linear Search using recursion */

#include<iostream>
using namespace std;

int recursiveLinearSearch(int array[],int key,int size)
{
        size=size-1;
        if(size <0)
    {
               cout << " Size Must be Grater Than 0  ";
        }
        else if(array[size]==key)
        {
                cout << " Key Found En Array In Index Number "<<size<<" ";
        }
        else
        {
                return recursiveLinearSearch(array,key,size);
        }
}

int main()
{
        int size;
        cout<<"\nEnter Size Of Array :: ";
        cin>>size;
        int array[size], key,i;

        for (int j=0;j<size;j++)
    {
                cout<<"\nEnter [ "<<j<<" ] Element :: ";
                cin>>array[j];
        }

        cout<<"\nThe Array entered is :: \n\n";

        for (int a=0;a<size;a++)
    {
                cout<<"Arr[ "<<a<<" ]  =  ";
                cout<<array[a]<<endl;
        }

        cout<<"\nEnter any Key To Search in Array :: ";
        cin>>key;
        int result;

        result=recursiveLinearSearch(array,key,size--);

}