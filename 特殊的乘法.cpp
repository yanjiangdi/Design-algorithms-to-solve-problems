#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		long long sum=0;
		for(int i=0;i<a.length();i++)
		{
			string str;
			stringstream stream;
			stream << a[i];
			str = stream.str();
			int t=atoi(str.c_str());
			for(int j=0;j<b.length();j++)
			{
				string str;
				stringstream stream;
				stream << b[j];
				str = stream.str();
				int t1=atoi(str.c_str());
				sum+=t*t1;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
 } 
