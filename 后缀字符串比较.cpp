#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool cmp(string s1,string s2)
{
	return s1<s2; 
}
int main()
{
	string str;
	while(cin>>str)
	{
		
		string s[100000];
		for(int i=0;i<str.length();i++)
		{
			s[i]=str.substr(i,str.length()-i);
		}
		sort(s,s+str.length(),cmp);
		for(int i=0;i<str.length();i++)
		{
			cout<<s[i]<<endl; 
		}
		
	}
	return 0;
}
