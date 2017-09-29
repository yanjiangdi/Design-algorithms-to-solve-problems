#include <iostream>
using namespace std;
int main()
{
    int l,m;
    while(cin>>l>>m)
    {
    	int num[l+1];
    	for(int i=0;i<=l;i++)
    	{
    		num[i]=i;
		}
		int count=0;
		for(int i=0;i<m;i++)
		{
			int left,right;
			cin>>left>>right;
			for(int j=0;j<=l;j++)
			{
				if(num[j]>=left && num[j]<=right)
				{
					num[j]=100000;
				}
			}
		}
		for(int i=0;i<=l;i++)
		{
			if(num[i]!=100000)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}	
    return 0;
}

