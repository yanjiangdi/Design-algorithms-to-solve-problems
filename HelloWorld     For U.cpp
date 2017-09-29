#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		while(str.length()<5)
		{
			cin>>str;
		}
		//if(str.length()%2==0)
	//	{
			for(int i=0;i<(str.length()+2)/3-1;i++)
			{
				//cout<<i<<endl;
				cout<<str.substr(i,1);
				for(int j=0;j<str.length()-((str.length()+2)/3-1)*2-2;j++)
				{
					cout<<" ";
				}
				cout<<str.substr(str.length()-1-i,1)<<endl;
			}
			cout<<str.substr((str.length()+2)/3-1,str.length()-((str.length()+2)/3-1)*2)<<endl;
		//}
		
	}	
	return  0;
}
