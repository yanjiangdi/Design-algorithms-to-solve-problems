#include <iostream>
#include <string>
using namespace std;
int main()
{
l:
	string str;
	while(cin>>str)
	{
		while(str.length()>1000)
		{
			cout<<"请输入0-1000长度的字符串！"<<endl;
		}
		
		for(int i=0;i<str.length()/2;i++)
		{
			if(str[i]!=str[str.length()-1-i])
			{
				cout<<"No!"<<endl;
				goto l;
			}
		}
		cout<<"Yes!"<<endl;
	}
	return 0;
}
