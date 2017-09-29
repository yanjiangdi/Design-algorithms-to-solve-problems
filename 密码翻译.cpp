#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		getchar();
		for(int i=0;i<n;i++)
		{	
			string str;
			getline(cin,str);
			for(int i=0;i<str.length();i++)
			{
				if(str[i]=='z')
				{
					str[i]='a';
				}
				else if(str[i]=='Z')
				{
					str[i]='A';
				}
				else if((str[i]>='a' && str[i]<='y') || (str[i]>='A' && str[i]<='Y'))
				{
					str[i]=str[i]+1;
				}
				cout<<str[i];
			}
			cout<<endl; 
		}
	 } 
	return 0;
}
