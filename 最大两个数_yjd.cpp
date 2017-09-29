#include <iostream>
using namespace std;
int main()
{
	int n;
	int maxt[4][5];
	int f[5];
	int f1[5];
	int s[5];
	int s1[5];
	cin>>n;
	while(n--)
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<5;j++)
			{
				cin>>maxt[i][j];
			}
		}
		for(int i=0;i<5;i++)
		{
			int max=0,index;
			for(int j=0;j<4;j++)
			{
				if(max<maxt[j][i])
				{
					max=maxt[j][i];
					f1[i]=j;
					index=j;
				}
			}
			f[i]=max;
			maxt[index][i]=0;
		}
		for(int i=0;i<5;i++)
		{
			int max=0;
			for(int j=0;j<4;j++)
			{
				if(max<maxt[j][i])
				{
					max=maxt[j][i];
					s1[i]=j;
				}
			}
			s[i]=max;
		}
		for(int i=0;i<5;i++)
		{
			if(f1[i]<s1[i])
			{
				cout<<f[i]<<" ";
			}
			else
			{
				cout<<s[i]<<" ";
			}
		}
		cout<<endl;
		for(int i=0;i<5;i++)
		{
			if(f1[i]>s1[i])
			{
				cout<<f[i]<<" ";
			}
			else
			{
				cout<<s[i]<<" ";
			}
		}
		cout<<endl; 
	} 
	return 0;
}
