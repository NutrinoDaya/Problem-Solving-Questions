 /* C++ Program to Delete an element in an array at desired position */

#include<iostream>
using namespace std;

int main()
{
   int i,a[50],no,pos,size;
    cout<<"Enter array size( Max:50 ) : " << endl;
    cin>>size;
        cout<<"Enter array elements :" << endl;

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }

  cout<<"Stored Data in Array : " << endl;

  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" " << endl;
  }

  cout<<" Enter position to Delete number : " << flush;
  cin>>pos;

  if(pos>size)
  {
    cout<<"This is out of range." << endl;
  }
  else
   {
   --pos;
   for(i=pos;i<=size-1;i++)
   {
    a[i]=a[i+1];
   }
   cout<<"New Array is : " << endl;;

  for(i=0;i<size-1;i++)
  {
    cout<<" "<<a[i]<<" ";
  }

  }
  cout<<"\n";

  return 0;

  }