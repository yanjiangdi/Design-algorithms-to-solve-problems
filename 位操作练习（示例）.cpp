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
			int temp=0;
			for(int j = 0;j < 16;j ++)
			{
				temp = ((a << j) | (a >> (16 - j))) & 65535;
				if(temp == b)
				{
					cout<<"YES"<<endl;
					break;
				}
				else if(j==15 && temp!=b) 
				{
					cout<<"NO"<<endl;
				}
			}

		}
	}
	return 0;
}
