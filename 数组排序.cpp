#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num[n];
		int num2[n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
			num2[i]=num[i];
		 } 
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(num2[j]>num2[j+1])
				{
					int temp=num2[j];
					num2[j]=num2[j+1];
					num2[j+1]=temp;
				}
			}
		}
		 
		 for(int i=0;i<n;i++)
		 {
		 	int index=0,index1=0;
		 	for(int j=0;j<n;j++)
		 	{
		 		index1=j;
		 		if(num2[j]<num[i])
		 		{
		 			if(num2[j]==num2[j+1])
		 			{
		 				index++;
					 }
				 }
				 else
				 {
				 	break;
				 }
			}
			if(i!=n-1)
			{
				cout<<index1+1-index<<" ";	
			}
			else
			{
				cout<<index1+1-index<<endl;
			}
		
		 }
	}
	return 0;
}
