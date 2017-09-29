#include <iostream>
using namespace std;
int num1[1000000],num2[1000000];
int main()
{
	int n,m;
	while(cin>>n)
	{
		//int num1[n];
		for(int i=0;i<n;i++)
		{
			cin>>num1[i];
		}
		cin>>m;
	//	int num2[m];
		for(int i=0;i<m;i++)
		{
			cin>>num2[i];
		}

		int count=(m+n-1)/2;
		int i=0,j=0;
		for(int k=0;k<count;k++)
		{
			if(num1[i]<num2[j])
			{
				i++;
			}
			else
			{
				j++;
			}
		}
		
		if(num1[i]<num2[j])
		{
			cout<<num1[i]<<endl;
		}
		else
		{
			cout<<num2[j]<<endl;
		}
		
	}
	return 0;
}
