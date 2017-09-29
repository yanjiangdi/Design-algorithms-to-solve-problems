#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath> 
#include <sstream>
using namespace std;


int main()
{
	string str;
	while(cin>>str)
	{
		long n=0;
		for(int i=2;i<str.length();i++)
		{
			if(str[i]>='A' && str[i]<='F')
			{
				int t=(((int)str[i])-55);
				n+=t*pow(16,str.length()-1-i);
			}
			else
			{
				
				n+=(int(str[i]-'0'))*pow(16,str.length()-1-i);
			}
			
		}
		
			cout<<n<<endl;
		
	}

	return 0;
}
