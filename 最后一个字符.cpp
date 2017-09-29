#include <iostream>
#include <map>
using namespace std;
int main()
{
	int n;
	string str;
	cin>>n;
		for(int i=0;i<n;i++)
		{
			map<char, int>   mymap; 
			string str;
			cin>>str;
			for(int j=0;j<str.length();j++)
			{
				mymap[str[j]]++;
				if(mymap[str[j]]>1)
				{
					mymap.erase(str[j]);
				}
			}
			int ii=100000000;
			for(map<char,   int>::iterator it= mymap.begin();it!=mymap.end();++it)  
			{
			  	int find=str.find(it->first);
				if(ii>find)
				{
					ii=find;
				}	
			} 
			cout<<str[ii]<<endl;
			
		}
	
	return 0;
}
