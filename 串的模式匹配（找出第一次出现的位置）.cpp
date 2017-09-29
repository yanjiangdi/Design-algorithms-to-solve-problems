#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int findAppearance(string A, int lena, string B, int lenb) {
        // write code here
        
        int index=0;
        int j=0;
        for(int i=0;i<=lena-lenb;i++)
        {
        	if(A.substr(i,lenb)==B)
        	{
        		index=1;
        		j=i;
        		break;
			}
		} 
		if(index==0)
		{
			return -1;
		}
		else
		{
			return j;
		}
    }


int main()
{
	string str1,str2;
	while(cin>>str1>>str2)
	{
		cout<<findAppearance(str1,str1.length(),str2,str2.length())<<endl;
	}
	
}
