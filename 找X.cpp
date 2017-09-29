#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		while(n<1 || n>200)
		{
			cin>>n;
		}
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int x;
		cin>>x;
		int index=-1;
		for(int i=0;i<n;i++)
		{
			if(x==arr[i])
			{
				index=i;
				break; 
			}
		}
		
		cout<<index<<endl;

		
	}
	return 0;
}
