#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n;
	string s1,s2;
	while(cin>>s1>>s2)
	{
		while(s1.length()<1 ||s1.length()>100 ||s2.length()<1 || s2.length()>100)
		{
			cin>>s1>>s2;
		}
		cout<<s1+s2<<endl;
	}	
	return 0;
}
