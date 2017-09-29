#include <iostream>
using namespace std;
struct word{
	char c;
	int count=0;
};
int main()
{
	word w[26];
	for(int i=0;i<26;i++)	
	{
		w[i].c=65+i;
	}
	string str;
	while(cin>>str)
	{
		for(int i=0;i<26;i++)
		{
			for(int j=0;j<str.length();j++)
			{
				if(str[j]==w[i].c)
				{
					w[i].count++;
				}
				
			}	
		}
		for(int i=0;i<26;i++)	
		{
			cout<<w[i].c<<":"<<w[i].count<<endl;
			w[i].count=0;
		}

	
	}
	return 0;
 } 
