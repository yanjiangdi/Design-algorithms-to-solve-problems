#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool cmp(char c1,char c2)
{
	return (int(c1) )< (int(c2));
}

int main()
{
	string str;
	while(cin>>str)
	{
		char ch[str.length()];
		strcpy(ch, str.c_str());
		sort(ch,ch+str.length(),cmp);
		cout<<ch<<endl;
		
	}
	return 0;
}
