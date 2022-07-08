/* C++ Program for 4 Dimensional Array Example  */
// :))//
#include<iostream>
using namespace std;

int main()
{

        int arr[2][3][2][2];
        for(int i=0;i<2;i++){
            for(int k=0;k<3;k++){
                for(int j=0;j<2;j++){
                    for(int h=0;h<2;h++){
                        cout << " Enter Element number "<<i<<" "<<k<<" "<<j<<" "<<h<<" " << flush;
                        cin >> arr[i][k][j][h];
                    }
                }
            }
        }
        // Printing The array
            for(int i=0;i<2;i++){
            for(int k=0;k<3;k++){
                for(int j=0;j<2;j++){
                    for(int h=0;h<2;h++){
                        cout << arr[i][k][j][h];
                        cout << " "'
                    }
                    cout << " ";
                }
                cout << " ";
            }
        }
        cout << " ";
          
}