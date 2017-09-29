#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool cmp(char a,char b)
{
	return ((int)(a))<((int)(b));
}
int main()
{
	string str;
	while(cin>>str)
	{
		char ch[str.length()];
		strcpy(ch, str.c_str());
		sort(ch,ch+str.length(),cmp);
		cout<<ch;
		cout<<endl;
	}
	return 0;
}
