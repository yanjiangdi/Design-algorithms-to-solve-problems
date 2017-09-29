#include <iostream>
using namespace std;
int Count(int n)
{
	
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	while(cin>>n && n)
	{
		cout<<Count(n)<<" "<<Count(n*n)<<endl;
	}
 } 
