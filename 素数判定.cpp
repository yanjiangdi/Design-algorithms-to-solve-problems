#include <iostream>
using namespace std;
bool isS(int num)
{
	for(int i=1;i<=num;i++)
	{
		if(num%i==0 && i!=1 && i!=num)
		{
			return false;
		}
	}	
	return true;	
}
	
int main()
{
	int num;
	while(cin>>num)
	{
		if(num<=1)
		{
			cout<<"no"<<endl;
		}
		else
		{
			if(isS(num))
			{
				cout<<"yes"<<endl;
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}
