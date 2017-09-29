#include <iostream>
using namespace std;
int main()
{
	string str;
	string c;
	while(cin>>str>>c)
	{
		string s="";
		for(int i=0;i<str.length();i++)
		{
			if(str.substr(i,1)==c)
			{
				continue;
			}
			else
			{
				s+=str.substr(i,1);
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
