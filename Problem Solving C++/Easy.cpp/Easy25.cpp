// C++ Program to Calculate Arithmetic Mean For A Set Of Numbers from 1 to  N 
#include <iostream> 
using namespace std; 
int main (){
     int n;
     float Sum =0;
     cout << "Enter A Number : " << flush;
     cin >> n;
     for(int i=0;i<=n;i++){
         Sum+=i;
     }
     float ArethMean = Sum/n;
    cout << "The Arethmetic Mean of The Numbers from 1 to "<<n<<" = " << ArethMean << endl;
}
 