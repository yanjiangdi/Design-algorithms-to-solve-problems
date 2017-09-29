#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n<1 || n>100)
		{
			cin>>n; 
		}
		int num[n];
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
		int k;
		cin>>k;
		int m=0;
		for(int i=0;i<n;i++)
		{
			if(num[i]!=num[i+1])
			{
				m++;
				if(m==k)
				{
					cout<<num[i]<<endl;
				}
			}
		}
		 
	}
	return 0;
}
