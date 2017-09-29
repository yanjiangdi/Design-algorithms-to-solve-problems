#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct stru
{
	string data;
	int length;
};

bool cmp(stru s1,stru s2)
{
	return s1.length<s2.length;
}

int main()
{
	int n;
	while(cin>>n)
	{
		getchar();
		stru *strs=new stru[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			string str_in;
			getline(cin,str_in);
			if(str_in=="stop")
			{
				break;
			}
			else
			{
				strs[i].data=str_in;
				strs[i].length=str_in.length();
				count++;
			}
		}
		sort(strs,strs+count,cmp);
		for(int i=0;i<count;i++)
		{
			cout<<strs[i].data<<endl;
		}
	}
	
	return 0;
}
