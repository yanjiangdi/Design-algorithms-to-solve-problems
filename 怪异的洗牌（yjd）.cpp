#include <iostream>
#include <sstream>
using namespace std;
string str="";
string Int_to_String(int n)
{
ostringstream stream;
stream<<n;  //nÎªintÀàÐÍ
return stream.str();
}
void ship(string &str,int n)
{	
	if(str.length()%2==0)
	{
		str=str.substr(n,str.length()-n)+str.substr(0,n);
	}
	if(str.length()%2==0)
	{
		int l=str.length()/2;
		if(l%2==0)
		{
			str=str.substr(str.length()/4,str.length()/4)+str.substr(0,(str.length()/4)-1)+str.substr(str.length()/2,str.length()/2);
		}
		else
		{
			
			str=str.substr(l/2+1,l/2) +str.substr(l/2,1)+str.substr(0,l/2)+str.substr(l,l);
		}
	}
	else
	{
		int l=(str.length()-1)/2;
		if(l%2==0)
		{
			str=str.substr((str.length()-1)/4,(str.length()-1)/4)+str.substr(0,(str.length()-1)/4)+str.substr((str.length()-1)/2,(str.length()-1)/2+1);	
		}
		else
		{
			str=str.substr((str.length()-1)/4+1,(str.length()-1)/4)	+str.substr((str.length()-1)/4,1)+str.substr(0,(str.length()-1)/4)+str.substr((str.length()-1)/2,(str.length()-1)/2+1);
		}
	}

}
int main()
{
	int n,k;
	while(cin>>n>>k && n)
	{
		for(int i=1;i<=n;i++)
		{
			str+=Int_to_String(i);
		 } 
		 for(int i=0;i<k;i++)
		 {
		 	int po;
		 	cin>>po;
		 	ship(str,po);
		 	for(int i=0;i<str.length()-1;i++)
		 	{
		 		cout<<str[i]<<" ";
		 	}
		 	cout<<str[str.length()-1]<<endl;
		 }
		 
	}
	
	return 0;
 } 
