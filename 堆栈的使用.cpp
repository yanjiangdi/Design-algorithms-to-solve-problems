#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n && n)  
	{
		stack<double> s;
		for(int i=0;i<n;i++)
		{
			string str1="";
			cin>>str1;
			if(str1=="P") 
			{
				string str2;
				cin>>str2;
				double num=(double)atoi(str2.c_str());
				s.push(num);
				
			}
			else if(str1=="A")
			{
					if(s.empty())
					{
						cout<<"E"<<endl;
					}
					else
					{
						double nu=s.top();
						cout<<nu<<endl;
					}
			}
			else if(str1=="O")
			{
				if(!s.empty())
				{
					 s.pop();	
				}
				
						
			}
			if(i==n-1)
				{
					cout<<endl;
				}		
				
		}
			
	}	
	return 0; 
}
