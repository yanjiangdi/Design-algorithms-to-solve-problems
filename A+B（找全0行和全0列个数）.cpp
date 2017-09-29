#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n && n)
	{
		cin>>m;
		while(n<1 || n>10 || m<1 || m>10)
		{
			cin>>n>>m;
		}
		int A[n][m];
		int B[n][m];
		int sum[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>A[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>B[i][j];
				sum[i][j]=A[i][j]+B[i][j];
			}
		}
		int s=0,in1=0,in2=0;
		for(int i=0;i<n;i++)
		{
			int index=0;
			for(int j=0;j<m;j++)
			{
				if(sum[i][j]!=0)
				{
					break;
				}
				else
				{
					index++;
				}
			}
			if(index==m)
			{
				in1++;
			}
		}
		for(int i=0;i<m;i++)
		{
			int index=0;
			for(int j=0;j<n;j++)
			{
				if(sum[j][i]!=0)
				{
					break;
				}else
				{
					index++;
				}
			}
			if(index==n)
			{
				in2++;
			}
		}
		
		s=in1+in2;
		cout<<s<<endl;
		
		
	}
	return 0; 
} 
