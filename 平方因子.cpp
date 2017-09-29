#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n && n)
	{
		int i=2;
		int count=0;
		while((i*i)<=n)
		{
			if(n%(i*i)==0)
			{
				count++;
			}
			i++;
		}
		if(count>0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
