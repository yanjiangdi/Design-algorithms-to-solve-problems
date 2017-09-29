#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int num[n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		for(int i=0;i<n;i++)
		{
			int count=0;
			for(int j=0;j<n;j++)
			{
				if(j==i)
				{
					continue;
				 } 
				 else
				 {
				 	if(num[i]==num[j])
				 	{
				 		count++;
					 }
				 }
			} 
			if(count>0)
			{
				cout<<count<<endl;	
			}
			else
			{
				cout<<"BeiJu"<<endl;
			}
		}
	}
	return 0;
}
