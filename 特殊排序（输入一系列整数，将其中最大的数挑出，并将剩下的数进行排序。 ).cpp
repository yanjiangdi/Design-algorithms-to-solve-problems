#include <iostream>
using namespace std;
int main()
{
	int n;
	int num[1000];
	while(cin>>n)
	{
		while(n<1 || n>1000)
		{
			cin>>n;
		}
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		if(n==1)
		{
			cout<<num[0]<<endl<<-1<<endl;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n-i-1;j++)
				{
					if(num[j] > num[j + 1])
		            {
		                int temp = num[j];
		                num[j] = num[j + 1];
		                num[j + 1] = temp;
		            }
				}
			}
			cout<<num[n-1]<<endl;
			for(int i=0;i<n-1;i++)
			{
				if(i!=n-2)
				{
					cout<<num[i]<<" ";	
				}
				else
				{
					cout<<num[i]<<endl;
				}		
			}	
		}
	
	}
	return 0;
}
