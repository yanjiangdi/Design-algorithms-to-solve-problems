#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
			if(i>=1 && num[i]!=num[i-1])
			{
				count++;
			 } 
		}
		sort(num,num+n);
		int nu[count];
		int k=0;
		for(int i=0;i<n;i++)
		{
			if(num[i]!=num[i+1])
			{
				nu[k]=num[i];
				k++;
			}
			
		}
		for(int i=0;i<k-1;i++)
		{
			cout<<nu[i]<<" ";
		}
		cout<<nu[k-1]<<endl;
	}
	return 0;
}
