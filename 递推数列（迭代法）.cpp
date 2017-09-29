#include <iostream>
using namespace std;
int main()
{
	
	int a,b,p,q,k;
	while(cin>>a>>b>>p>>q>>k)
	{
		long long num[k+1];
		num[0]=a;
		num[1]=b;
		for(int i=2;i<=k;i++)
		{
			num[i]=(p*num[i-1]+q*num[i-2])%10000;
		}
		
		cout<<num[k]<<endl;
	}
	return 0;
}
