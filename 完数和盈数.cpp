#include <iostream>
using namespace std;
bool isw(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;	
		}
	}
	if(sum==n) 
	{
		return true;	
	} 
	return false;
}
bool isy(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;	
		}
	}
	if(sum>n) 
	{
		return true;	
	} 
	return false;
}
int main()
{
	cout<<"E: ";
	int count=0;
	for(int i=2;i<=60;i++)
	{
		if(isw(i))
		{
			count++;
			if(count==1)
			{
				cout<<i;	
			}
			else
			{
				cout<<" "<<i;
			}
			
		}
	}
	cout<<endl;
	cout<<"G: ";
	int c=0;
	for(int i=2;i<=60;i++)
	{
		if(isy(i))
		{
			c++;
			if(c==1)
			{
				cout<<i;	
			}
			else
			{
				cout<<" "<<i;
			}
		}
	}
	cout<<endl;
	return 0;
}
