#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			int n=1;
			int temp=a;
			while(temp<b)
			{
				temp=((a<<n) | (a >> (16 - n)) ) & 65535;
				n++; 
			}
			if(temp==b)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
			
		}
	}
	return 0;
}
