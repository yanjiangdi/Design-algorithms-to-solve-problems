#include <iostream>
using namespace std;
void re(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='a' &&str[i]<='z')
		{
			int d=str[i]-'a';
			cout<<(char)('z'-d);
		}
		else if(str[i]>='A' &&str[i]<='Z')
		{
			int d=str[i]-'A';
			cout<<(char)('Z'-d);
		}
		else
		{
			cout<<str[i]; 
		}
	}
	cout<<endl;
}
int main()
{
	string str;
	while(cin>>str && str!="!")
	{
		while(str.length()>80 || str.length()<1)
		{
			cin>>str;
		}
		re(str);
		
	}
	return 0;
}
