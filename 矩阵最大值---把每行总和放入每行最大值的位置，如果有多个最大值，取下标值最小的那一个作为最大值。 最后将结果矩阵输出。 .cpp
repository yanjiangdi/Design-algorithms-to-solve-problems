#include <iostream>
using namespace std;
int main()
{
	int m,n;
	int max[100][100];
	while(cin>>m>>n)
	{
		while(m<1 || n<1 || m>100 || n>100)
		{
			cin>>m>>n;	
		}	
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>max[i][j];
			}
		}
		for(int i=0;i<m;i++)
		{
			int lmax=0,po=0,lineSum=0;
			for(int j=0;j<n;j++)
			{
				lineSum+=max[i][j];
				if(lmax<max[i][j])
				{
					po=j;
					lmax=max[i][j];
					
				}
			}
			max[i][po]=lineSum;
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j<n-1)
				{
					cout<<max[i][j]<<" ";	
				}
				else
				{
						cout<<max[i][j];
				}
			
			}
			cout<<endl;
		}
		
	}
}
