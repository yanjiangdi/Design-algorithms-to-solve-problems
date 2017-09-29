#include <iostream>
using namespace std;
int main() 
{
	int n;
	while(cin>>n)
	{
		while(n<1 || n>1000)
		{
			cin>>n;
		}
		int num;
		int ou=0;
		for(int i=0;i<n;i++)
		{
			cin>>num; 
			if(num%2==0)
			{
				ou++;
			}
		}
		string str=ou>(n-ou)?"NO":"YES";
		cout<<str<<endl;
		
	}
	return 0;
}
