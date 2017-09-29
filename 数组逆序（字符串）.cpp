#include <iostream>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		while(str.length()>200)
		{
			cin>>str;
		}
		string s(str.rbegin(),str.rend());
		cout<<s<<endl;
	}
	return 0;
}
