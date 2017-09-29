#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string str1,str2;
	while(cin>>str1>>str2)
	{
		while(str1.length()!=str2.length())
		{
			cin>>str1>>str2;
		}
		string strS="";
		for(int i=0;i<str1.length();i++)
		{
			strS=strS+str1[i]+str2[str1.length()-i-1];
		}
		cout<<strS<<endl;
	}
	return 0;
 } 
