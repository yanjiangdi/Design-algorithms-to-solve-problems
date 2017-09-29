#include <iostream> 
#include <cstring> 
#include <sstream>
#include <algorithm> 

using namespace std; 

int main() 
{ 
 	string str;
 	string s[100];
 	int n;
 	while(cin>>str>>n)
 	{
 		int k=0;
 		for(int i=0;i<n;i++)
 		{
 			string str1;
	 		cin>>str1;
	 		if(str1.substr(0,1)=="0")
	 		{
	 			int num1,num2;
	        	stringstream ss(str1.substr(1,1));
	        	ss>>num1;
	        	stringstream ss1(str1.substr(2,str1.length()-2));
	        	ss1>>num2;
	 			string str2=str.substr(num1,num2);		
	 			reverse(str2.begin(),str2.end());
	 			str=str.substr(0,num1)+str2+str.substr(num1+num2,str.length()-num1-num2);
	 			s[k]=str;
	 			k++;
			}
			else if(str1.substr(0,1)=="1")
			{
				int index=0;
				for(int i=0;i<str1.length();i++)
				{
					if(!isdigit(str1.at(i)))
					{
						index=i;
						break;
					}
				}
				int num1,num2;
	        	stringstream ss(str1.substr(1,1));
	        	ss>>num1;
	        	stringstream ss1(str1.substr(2,index-1));
	        	ss1>>num2;
	        	string str2=str1.substr(index,str1.length()-index);
				str=str.substr(0,num1)+str2+str.substr(num1+num2,str.length()-num1-num2);
				s[k]=str;
	 			k++;
			}
		 } 
		 
		 for(int i=0;i<n;i++)
		 {
		 	cout<<s[i]<<endl;
		 }
 		
	 }
	return 0; 
}
