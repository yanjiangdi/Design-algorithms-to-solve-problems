#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,m;
	while(cin>>n>>m && n && m)
	{
		int num[n]; 
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		} 
		
		sort(num,num+n,cmp);
		
		if(n<=m)
		{
			for(int i=0;i<n-1;i++)
			{
				cout<<num[i]<<" ";
			}
			cout<<num[n-1]<<endl;
		}
		else
		{
			for(int i=0;i<m-1;i++)
			{
				cout<<num[i]<<" ";
			}
			cout<<num[m-1]<<endl;	
		}
		
	}
	return 0;
}
