#include <iostream>
using namespace std;
int main()
{
	l:
	int m,n;
	while(cin>>n)
	{
		while(n<1 || n>100)
		{
			cin>>n;
		}
		
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>m;
		while(m<1 || m>100)
		{
			cin>>m;
		}
		int b[n];
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(b[i]==a[j])
				{
					cout<<"YES"<<endl;
					break;
				}
				else
				{
					if(b[i]!=a[j] && j==n-1)
					{
						cout<<"NO"<<endl;	
						break;
					}
				}
			}
			
		}
	}
	return 0;
}

