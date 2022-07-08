// C++ Program To Find The Length Of A String Without Using Built In Functions
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char string[20];
    int count =0;
    cout << " Enter A string " << flush;
    gets(string);
    int i=0;
    for(int i=0;string[i];i++){
        if(string[i] != '\0'){
            count++;
        }
    }
    cout << " The Length Of The String = " << count;
}
