#include <iostream>
using namespace std;
int main()
{
	int n;
	//int matrix[10000][10000];
	while(cin>>n)
	{
		while(n<2)
		{
			cin>>n;
		}
		int matrix[n-1][n];

		for(int i=0;i<n-1;i++)
		{
			matrix[i][0]=matrix[i][i+1]=1;
			for(int j=1;j<(i+1);j++)
			{
				matrix[i][j]=matrix[i-1][j-1]+matrix[i-1][j];
			}
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<i+2;j++)
			{
				cout<<matrix[i][j]<<" "; 
			}
			cout<<endl;
		}
		
	}
	return 0;
}
