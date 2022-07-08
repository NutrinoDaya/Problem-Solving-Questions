#include<iostream>
using namespace std;
int main()
{
	//Allocate a four-dimensional 3x2x4x3x5 array of ints
	int***** ip4array=new int****[3];
	for(int i=0;i<3;++i)
	{
		ip4array[i]=new int***[2];
		for(int j=0;j<2;++j)
		{
			ip4array[i][j]=new int**[4];
			for(int k=0;k<4;++k)
			{
				ip4array[i][j][k]=new int*[3];
				for(int l=0;l<3;l++)
				{
					ip4array[i][j][k][l]=new int[5];
				}
			}
		}

	}
	//fill the array
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<4;++k)
			{
				for(int l=0;l<3;++l)
				{
					for(int m=0;m<5;++m)
					{
					ip4array[i][j][k][l][m]=i+j+k+l+m;
				}
				}
			}
		}
	}
	//output the array
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<4;++k)
			{
				for(int l=0;l<3;++l)
				{
					for(int m=0;m<5;++m)
					{
					cout<<ip4array[i][j][k][l][m]<<" ";
					}
					cout<<endl;
				}
				cout<<endl;
			}
			cout<<endl;
		}
		cout<<endl;
	}
	cout<<endl;
	//Deletiing the arrays
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<4;++k)
			{
				for(int l=0;l<3;++l)
				{
				delete ip4array[i][j][k][l];
			}
				delete ip4array[i][j][k];
			}
			delete ip4array[i][j];
		}
		delete [] ip4array[i];
	}
	delete[] ip4array;
	system("pause");
	return 0;
}