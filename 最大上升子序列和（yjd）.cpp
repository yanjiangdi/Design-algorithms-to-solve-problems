#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int  num[n];
		int cMax[n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		int  sum=num[0];
		for(int i=0;i<n;i++)
		{
			cMax[i]=num[i];
			for(int j=0;j<i;j++)
			{
				if(num[j]<num[i] && cMax[j]+num[i]>cMax[i])
				{
					cMax[i]=cMax[j]+num[i];
				}
			}
			if(sum<cMax[i])
			{
				sum=cMax[i];
			}
			
			
		}
		cout<<sum<<endl;
	}
	return 0;
}
