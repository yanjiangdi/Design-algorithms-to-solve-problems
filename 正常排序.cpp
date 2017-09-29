#include <iostream>
using namespace std;
int main()
{
	int n;
	int num[100];
	while(cin>>n)
	{
		while(n<1 || n>100)
		{
			cin>>n;
		}
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(num[j]>num[j+1])
				{
					int temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<num[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
