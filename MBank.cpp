#include <iostream>
using namespace std;
int main()
{
	string f,t;
	int m;
	char type;
	double sum=0;
	while(cin>>f)
	{
		if(f=="0")
		{
			cout<<(int)(sum+0.5)<<endl;
			sum=0;
		}
		else if(f=="#")
		{
			break;
		}
		else 
		{
			cin>>t>>m>>type;
			if(type=='F')
			{
				sum+=2*m;
			}
			else if(type=='B')
			{
				sum+=1.5*m;
			}
			else if(type=='Y')
			{
				if(m>=1 && m<=500)
				{
					sum+=500; 
				} 
				else
				{
					sum+=m;
				}
			}
		}
		
	}
	return 0;
}
