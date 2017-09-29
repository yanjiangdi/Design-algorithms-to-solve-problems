#include<iostream>
#include<cstring>
 
using namespace std;
 
int main() {
	string str1,str2;
	while(cin>>str1>>str2)
	{
		int length=str2.length();
		int count=0;
		for(int i=0;i<=str1.length()-length;i++)
		{
			if(str1.substr(i,length)==str2)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
    return 0;
}
