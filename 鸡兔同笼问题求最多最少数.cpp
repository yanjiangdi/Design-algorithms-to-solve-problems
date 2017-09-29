#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int m;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			if(m%2!=0)
			{
				cout<<0<<" "<<0<<endl;
			}
			else
			{
				if(m%4==0)
				{
					cout<<m/4<<" "<<m/2<<endl;
				}
				else
				{
					cout<<(m-2)/4+1<<" "<<m/2<<endl;
				}
			}
		}
	}
	return 0;
 } 
