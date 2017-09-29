#include <iostream>
#include<algorithm> 
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num[n];
		int max=0,min=100000000;
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		sort(num,num+n);
		cout<<num[n-1]<<" "<<num[0]<<endl;
	}
	return 0;
}
