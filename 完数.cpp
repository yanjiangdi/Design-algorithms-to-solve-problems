#include <iostream>
using namespace std;
bool isw(int num)
{
	int sum=0;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0 && i!=num)
		{
			sum+=i;
		}
	}
	if(sum==num)
	{
		return true;
	}
	return false;
}
int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		for(int i=1;i<=n;i++)
		{
			if(isw(i))
			{
				count++;
				
			}
		}
		int m=0;
		for(int i=1;i<=n;i++)
		{
			if(isw(i))
			{
				m++;
				if(m<count)
				{
					cout<<i<<" ";
				}
				else
				{
					cout<<i;
				}
				
			}
		}
		cout<<endl;
	}
	return 0;
}
