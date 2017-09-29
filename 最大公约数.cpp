#include <iostream>
using namespace std;

int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(m>n)
		{
			for(int i=n;i>=1;i--)
			{
				if(m%i==0 && n%i==0)
				{
					cout<<i<<endl;
					break;	
				}
			}	
		}
		else
		{
			for(int i=m;i>=1;i--)
			{
				if(m%i==0 && n%i==0)
				{
					cout<<i<<endl;
					break;	
				}
			}	
		}
	}
	return 0;
}