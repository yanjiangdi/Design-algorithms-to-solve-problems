#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[3];
	while(cin>>arr[0]>>arr[1]>>arr[2])
	{
		sort(arr,arr+3);
		int value=arr[0]*arr[0]+arr[1]*arr[1]-arr[2]*arr[2];
		if(value>0)
		{
			cout<<"锐角三角形"<<endl;
		}
		else if(value==0)
		{
			cout<<"直角三角形"<<endl;
		}
		else
		{
			cout<<"钝角三角形"<<endl;
		}
	}
	return 0;
}
