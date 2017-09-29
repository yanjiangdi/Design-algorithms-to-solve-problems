#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str1,str2,str3;
	while(cin>>str1 && str1!="ENDOFINPUT")
	{
		getchar();
		getline(cin,str2);
		cin>>str3;
		for(int i=0;i<str2.length();i++)
		{
			if(str2[i]>='A' && str2[i]<='E')
			{
				cout<<char(((int)str2[i])+21 );	
			}
			else if(str2[i]>='F' && str2[i]<='Z')
			{
				cout<<char(str2[i]-5);
			}
			else
			{
				cout<<str2[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
