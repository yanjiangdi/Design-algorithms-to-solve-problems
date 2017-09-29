#include <iostream>
#include <string>
using namespace std;
struct mz
{
	string name;
	string fun;
}mzS[100000];
int isExistName(string str,mz mzS[],int k)
{
	for(int i=0;i<k;i++)
	{
		if(mzS[i].name==str)
		{
			return i;
		}
	}
	return -1;
}
int isExistFun(string str,mz mzS[],int k)
{
	for(int i=0;i<k;i++)
	{
		if(mzS[i].fun==str)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	string str;
	int n;
	int k=0;
	while(getline(cin,str)&& str!="@END@")
	{
		int index=0;
		for(int i=0;i<str.length();i++)
		{
			if(str.substr(i,1)==" ")
			{
				index=i;
				break;
			}
		}
		mzS[k].name=str.substr(0,index);
		mzS[k].fun=str.substr(index+1);
		k++;
	}
	
	cin>>n;
	getchar();
	for(int j=0;j<n;j++)
	{
		string str1;
		getline(cin,str1);
		if(str1.substr(0,1)!="[")
		{
			if(isExistFun(str1,mzS,k)!=-1)
			{
				cout<<mzS[isExistFun(str1,mzS,k)].name<<endl;
			}
			else
			{
				cout<<"what?"<<endl;
			}
		}
		else
		{
			if(isExistName(str1,mzS,k)!=-1)
			{
				cout<<mzS[isExistName(str1,mzS,k)].fun<<endl;
			}
			else
			{
				cout<<"what?"<<endl;
			}
		}
	}
	
	

	return 0;
}
