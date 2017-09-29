#include <iostream>
using namespace std;
int main()
{
	int n;
	int maxt[100][100];
	while(cin>>n)
	{
		while(n<1||n>100)
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
			for(int j=0;j<n;j++)
			{
				if(j!=n-1)
				{
					cout<<maxt[j][i]<<" ";
				}
				else
				{
					cout<<maxt[j][i];
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
