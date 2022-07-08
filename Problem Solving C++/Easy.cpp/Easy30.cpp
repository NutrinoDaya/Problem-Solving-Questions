/*  C++ Program to Count Occurrences of Character in a String  */
// You Can Solve it Also Using strlen :)) // 
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int count=0;
    string word;
    cout << " Enter A Word  : " << flush;
    getline(cin,word);
    for(int i=0;i<word.length();i++){
    count++;
    }
    cout << count;
   return 0;

}