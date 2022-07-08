//C++ Program to Take Input as String and Print the String
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
   cout << " Enter A Word " << flush; 
    getline(cin,word);
       cout << " The Word You Entered is : " << word << endl;
}