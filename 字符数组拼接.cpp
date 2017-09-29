#include <iostream>
#include <cstring>
using namespace std;
void MyStrcat(char dstStr[],char srcStr[]) 
{
	cout<<string(dstStr)+string(srcStr)<<endl;
}
int main()
{
	string str1,str2;
	while(cin>>str1>>str2)
	{
		char ch1[str1.length()];
		char ch2[str2.length()];
		strcpy(ch1, str1.c_str());
		strcpy(ch2, str2.c_str());
		MyStrcat(ch1,ch2);
	}
	return 0;
 } 
