#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n<1 || n>20)
		{
			cin>>n;
		}
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		} 
		int max=0,index1=0,min=arr[0],index2=0;
		for(int i=0;i<n;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
				index1=i;
			}
			if(min>arr[i])
			{
				min=arr[i];
				index2=i;
			}
		}
		
		arr[index1]=min;
		arr[index2]=max;
		for(int i=0;i<n-1;i++)
		{
			cout<<arr[i]<<" ";
		} 
		cout<<arr[n-1]<<endl;
	}
	return 0;
}
