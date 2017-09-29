#include <iostream>
using namespace std;

int jc(int n)
{
	if(n==1) return 1;
	else
	{
		return n*jc(n-1);
	}
}
int main()
{
	int n,n2;
	char str;
	while(cin>>n>>str)
	{
		switch(str)
		{
			case '+':
				cin>>n2;
				cout<<n+n2<<endl;
				break;
			case '-':
				cin>>n2;
				cout<<n-n2<<endl;
				break;
			case '*':
				cin>>n2;
				cout<<n*n2<<endl;
				break;
			case '/':
				cin>>n2;
				if(n2==0)
				{
					cout<<"error"<<endl;
				}
				else
				{
					cout<<n/n2<<endl;	
				}
				break;
			case '%':
				cin>>n2;
				if(n2==0)
				{
					cout<<"error"<<endl;
				}
				else
				{
					cout<<n%n2<<endl;	
				}
				break;
			case '!':
				cout<<jc(n)<<endl;
				break;
		}
	}
	return 0;
 } 
