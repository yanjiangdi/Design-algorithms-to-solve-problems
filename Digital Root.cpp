#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	long num;
	while(cin>>num && num)
	{
		if(num>=1 && num<=9)
		{
			cout<<num<<endl; 
		}
		else
		{
			 while(num>9)
			 {
			 	 ostringstream s1;
				 s1 << num << endl;
				 string s2 = s1.str();
				 num=0;
			 	 for(int i=0;i<s2.length();i++)
				 {
				 	int t=0;
				 	istringstream ss(s2.substr(i,1));
				 	ss>>t;
				 	num+=t;
				 }
			 }
			 cout<<num<<endl;
			 
		}
	}
	return 0;
}
