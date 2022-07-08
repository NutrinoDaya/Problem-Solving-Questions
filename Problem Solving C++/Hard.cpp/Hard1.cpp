// Mohammad Omar Dayarneh :))
// C++ HomeWork
// I hope you give me a full mark :)) 
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include<conio.h>
using namespace std;
int
main ()
{
  float G[5][4] =
    { {12, 14, 15, 16}, {18, 20, 13, 4}, {19, 14, 13, 12}, {10, 0, 4, 5}, {12, 15,17,14}};
  float MaxG[5], AvrS[5], Lmax[5], Sum, Max, SLoc;
  for (int St = 0; St <= 4; St++)
    {
      Max = G[St][0];
      SLoc = 0;
      Sum = G[St][0];

      for (int C = 1; C <= 3; C++)
	{

	  if (Max < G[St][C])
	    {
	      Max = G[St][C];
	      SLoc = C;
	    }
	  Sum += G[St][C];
	}
	  AvrS[St] = Sum / 4.0;
      Lmax[St] = SLoc + 1;
      MaxG[St] = Max;
    }
        float CAvg[5],CMaxG[5],StLoc[5],lmac,sumc,maxc;
    for (int c = 0 ; c< 4; c++){
        sumc = 0;
        maxc = 0;
        lmac = 0;
        for(int st = 0 ; st <5 ; st++){
            sumc = sumc + G[st][c];
            if (G[st][c]> maxc){
                maxc = G[st][c];
                lmac = st;
            }
        }
        CMaxG[c] = maxc;
        CAvg[c] = sumc;
        StLoc[c] = lmac;
        
    }
    cout << "_______________________________________________________________" << endl;
  cout << "| St_Num   C1 \t C2 \t C3 \t C4 \t MaxG \t AvrSt \t Lmax |" << endl;
  cout << "###############################################################" << endl;
  cout << "#" << setw(62)<< " #";
  cout << endl;
  for (int St = 0; St < 5; St++)
    {
        
      cout << "# "<< setw (3) << to_string (St + 1);

      for (int j = 0; j < 4; j++)
	{
	  cout << setw (8) << G[St][j];

	}
     cout << setw(8.5) << MaxG[St] << setw(11) << AvrS[St] << setw(5) << Lmax[St]  << " #" << endl;;


    }
      cout << "#" << setw(62)<< " #" << endl;
  cout << "###############################################################" << endl;
  cout << endl;
    cout << "     ################################################" << endl;
    cout<<"     # CMaxG:";
    for(int i =0; i<4 ; i++){
        cout<< setw(6) <<" "<<CMaxG[i];
    }
    cout << "       #";
    cout<<endl<<"     # StLoc:";
    for(int i =0; i<4 ; i++){
       cout<< setw(8)<<StLoc[i]+ 1;
    }
        cout << "       #";
    cout<<endl<<"     # CAvg:";
    for(int i =0; i<4 ; i++){
        cout<< setw(5) <<" "<<CAvg[i] / 5;
    }
        cout << "    #" << endl;
            cout << "     ################################################" << endl;
            cout << "\t"<< "           🤗🤗🤗🤗🤗🤗🤗🤗🤗🤗"	<< endl;
        return 0;
        }
