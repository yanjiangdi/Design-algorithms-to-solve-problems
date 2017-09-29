#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			int c;
			cin>>c;
			int num[c];
			for(int i=0;i<c;i++)
			{
				cin>>num[i];
			}
			int count=0;
			int p[c];
			for(int i=0;i<c;i++)
			{
				if((i==0 && num[i]!=num[i+1])|| (i==c-1 && num[i]!=num[i-1]))
				{
					p[count]=i;
					count++;
				}else
				{
					if((num[i]>num[i-1] && num[i]>num[i+1]) ||(num[i]<num[i-1] && num[i]<num[i+1]) )
					{
						p[count]=i;
						count++;
					}
				}
				
			}
				for(int i=0;i<count-1;i++)
				{
					cout<<p[i]<<" "; 
				}
				cout<<p[count-1]<<endl;
		}
	}
	return 0;
}
