#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n<1 || n>90)
		{
			cin>>n;
		}
		if(n==1)
		{
			cout<<1<<endl;
		}
		if(n==2)
		{
			cout<<2<<endl;
		}
		if(n>2)
		{
			long long f1=1;
			long long f2=2;
			for(int i=3;i<=n;++i)
			{
				f2+=f1;
				f1=f2-f1;
			}
			cout<<f2<<endl;
		}
		
	}
	return 0;
}
