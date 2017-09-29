#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num[n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		cout<<num[n-1];
		for(int i=n-2;i>=0;i--)
		{
			cout<<" "<<num[i];
		}
		cout<<endl;
	}
	return 0;
}
