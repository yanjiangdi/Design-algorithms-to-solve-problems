#include <iostream>
using namespace std;
int main()
{
	int n;
	int num[5];
	while(cin>>n>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]) 
	{
		int sum=0;
		for(int i=0;i<5;i++)
		{
			if(num[i]<n)
			{
				sum+=num[i];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
 } 
