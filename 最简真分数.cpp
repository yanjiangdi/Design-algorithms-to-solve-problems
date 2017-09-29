#include <iostream>
using namespace std;
bool is(int m,int n)
{
	int count=0;
	int min=m>n?n:m;
	for(int i=2;i<=min;i++)
	{
		if(m%i==0 &&n%i==0 )
		{
			count++;
		}
	}
	return count>=1?false:true;
}
int main()
{
	int n;
	while(cin>>n && n)
	{
		int num[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(is(num[i],num[j]))
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
