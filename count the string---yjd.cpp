#include <iostream>
#include <stdio.h>
 
using namespace std;

int count_subString(string str1,string str2)
{
		int count=0;
        int startpos = 0;
        int pos=str1.find(str2, startpos);
        while(pos!=string::npos)
        {
            count++;
            pos=str1.find(str2, pos+1);
        }
        return count;
}
 
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
        	int sum=0;
        	int l;
			string str1;
			cin>>l;
			cin>>str1;
        	for(int i=1;i<=str1.length();i++)
        	{
        		string str2=str1.substr(0,i);
        		sum+=count_subString(str1,str2);
			}
			
			cout<<sum<<endl;
        	
		}
    }
    return 0;
}



