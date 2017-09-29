#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			for(int k=0;k<=9;k++)
			{
				int abc=i*100+j*10+k;
				int bcc=j*100+k*10+k;
				if(abc+bcc==532)
				{
					cout<<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
	return 0;
}
