//C++ Program to Find Sum and Average of n numbers using for loop

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int StuGr[5];
    int sum=0;
    for(int i=0;i<4;i++){
        cout << " Enter The Student's Grade : " << flush;
        cin >> StuGr[i];
        sum+=StuGr[i];
        
    }
        float avg=sum/3;

    for(int i=0;i<4;i++){
        cout << StuGr[i] <<endl;
    }
    
    cout << " The Sum of The Grades = " << sum << endl;
    cout << " The Average Of The Grades = " <<  avg<< endl;
    return 0;
}