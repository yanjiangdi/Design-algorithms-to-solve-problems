#include <iostream>
using namespace std;
int main()
{
	int n;
	int maxt[10][10];
	while(cin>>n)
	{
		while(n<1 || n>10)
		{
			cin>>n;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>maxt[i][j];
			}
		}
		
		for(int i=0;i<n;i++)
		{
			int max=0,index;
			for(int j=i;j<n;j++)
			{
				if(max<maxt[j][i])
				{
					max=maxt[j][i];
					index=j;	
				}	
			}
			
			for(int j=0;j<n;j++)
			{
				int t=maxt[i][j];
				maxt[i][j]=maxt[index][j];
				maxt[index][j]=t;
			}
			
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j!=n-1)
				{
					cout<<maxt[i][j]<<" ";
				}
				else
				{
					cout<<maxt[i][j];
				}
				
			}
			cout<<endl;
		}
		
	}
	return 0;
}
