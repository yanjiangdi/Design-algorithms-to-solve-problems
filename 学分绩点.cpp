#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		double s[n];
		int xf[n];
		int xfSum=0; 
		double sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>xf[i];
			xfSum+=xf[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
			if(s[i]>=90 && s[i]<=100)
			{
				sum+=xf[i]*4.0;
			}
			else if(s[i]>=85 && s[i]<=89)
			{
				sum+=xf[i]*3.7;
			}else if(s[i]>=82 && s[i]<=84)
			{
				sum+=xf[i]*3.3;
			}else if(s[i]>=78 && s[i]<=81)
			{
				sum+=xf[i]*3.0;
			}
			else if(s[i]>=75 && s[i]<=77)
			{
				sum+=xf[i]*2.7;
			}
			else if(s[i]>=72 && s[i]<=74)
			{
				sum+=xf[i]*2.3;
			}else if(s[i]>=68 && s[i]<=71)
			{
				sum+=xf[i]*2.0;
			}else if(s[i]>=64 && s[i]<=67)
			{
				sum+=xf[i]*1.5;
			}else if(s[i]>=60 && s[i]<=63)
			{
				sum+=xf[i]*1.0;
			}
			else
			{
				sum+=xf[i]*0;
			}
		}
		cout<<setprecision(2)<<fixed<<sum/xfSum<<endl;
		
	}
	return 0;
 } 
