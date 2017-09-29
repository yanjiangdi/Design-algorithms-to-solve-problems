#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m && n)
	{
		int ma[n][n];
		int arr[n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{	
				ma[i][j]=0;	
			}
		}
		for(int i=0;i<m;i++)
		{
			int i1,j1;
			cin>>i1>>j1;
			ma[i1-1][j1-1]=1;
			ma[j1-1][i1-1]=ma[i1-1][j1-1];
		}/*
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				
				cout<<ma[i][j]<<" ";
			}
			cout<<endl;
		}*/
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(ma[i][j]==1 && i!=j)
				{
					arr[j]=1;
				}
			}
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				count++;
			}
		}
		if(count!=n)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
