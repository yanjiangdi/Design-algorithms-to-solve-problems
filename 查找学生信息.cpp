#include <iostream>
#include <cstring>
using namespace std;
struct Student
{
	string sid;
	string name;
	string sex;
	string age;
};
int main()
{
	int n,m;
	Student s[1000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>s[i].sid>>s[i].name>>s[i].sex>>s[i].age;
		}
		cin>>m;
		for(int j=0;j<m;j++ )
		{
			string str;
			cin>>str;
			string ss="";
			for(int i=0;i<n;i++)
			{
				if(s[i].sid==str)
				{
					ss=s[i].sid+" "+s[i].name+" "+s[i].sex+" "+s[i].age;
				}
			}
			if(ss=="")
			{
				cout<<"No Answer!"<<endl;
			 } 
			 else
			 {
			 	cout<<ss<<endl; 
			 }
		}
	}
	return 0;
}
