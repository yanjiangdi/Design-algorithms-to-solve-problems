#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int num;
	while(cin>>num)
	{
		for(int i=0;i<num;i++)
		{
			
			int m,n;
			cin>>m>>n;
			int n1[m],n2[n];	
			for(int j=0;j<m;j++)
			{
				cin>>n1[i];
			}
			for(int j=0;j<n;j++)
			{
				cin>>n2[j];
			}
			
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			int temp[b+d-a-c+2];
			int k=0;
			for(int j=a-1;j<b;j++)
			{
				temp[k]=n1[j];
				k++;
			}
			for(int j=c-1;j<d;j++)
			{
				temp[k]=n2[j];
				k++;
			}
			
			if((b+d-a-c+2)%2==0)
			{
				cout<<temp[(b+d-a-c+2)/2-1]<<endl;
			}
			else
			{
				cout<<temp[(b+d-a-c+2)/2]<<endl;
			}
			
		}
		
	}
	return 0;
 } 
