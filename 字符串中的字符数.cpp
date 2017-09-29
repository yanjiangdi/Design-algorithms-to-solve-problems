#include <iostream>
using namespace std;
int main()
{
	
	string str;
	while(getline(cin,str) && str!="#")
	{
		string str1;
		getline(cin,str1); 
		for(int i=0;i<str.length();i++)
		{
			int count=0;
			for(int j=0;j<str1.length();j++)
			{
				if(str.substr(i,1)==str1.substr(j,1))
				{
					count++;
				}
			}
			cout<<str.substr(i,1)<<" "<<count<<endl;
		}
	}
	return 0;
}
