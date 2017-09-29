#include <iostream>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		for(int i=str.length()-1;i>=0;i--)
		{
			cout<<str[i];
		}
		cout<<endl;
	}
	return 0;
 } 
