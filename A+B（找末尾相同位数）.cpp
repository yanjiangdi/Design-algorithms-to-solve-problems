#include <iostream>
using namespace std;
int main()
{
	int A,B,k;
	while(cin>>A>>B>>k &&A && B)
	{
		int sum=A+B;
		if(A%10!=B%10)
		{
			cout<<sum<<endl;
		}
		else
		{
			int count=1;
			A/=10;
			B/=10;
			while(A%10==B%10)
			{
				count++;
				A/=10;
				B/=10;
				
			}
			if(count==k)
			{
				cout<<-1<<endl;
			}
			else
			{
				cout<<sum<<endl;
			}
		}
	}
	return 0;
}
