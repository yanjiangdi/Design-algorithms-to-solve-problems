#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
struct ymdays
{
	int year;
	int month;
	int day;
}days[2];

bool cmp(ymdays y1,ymdays y2)
{
	if(y1.year!=y2.year)
	{
		return y1.year<y2.year;
	}
	else if(y1.month!=y2.month)
	{
		return y1.month<y2.month;
	}
	else
	{
		return y1.day<y2.day;
	}
}
int jt(int year,int month,int day)
{
		int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		int sum=0;
		if((year%4==0 && year%100!=0 ) || year%400==0)
		{
			days[1]=29;
		}
		else
		{
			days[1]=28;
		}
		for(int i=0;i<month-1;i++)
		{
			sum+=days[i];
		}
		sum=sum+day;
		return sum;
}
		
int main()
{
	string y1,y2;
	while(cin>>y1>>y2)
	{
		istringstream s(y1.substr(0,4));
		int y1_year;
		s>>y1_year;
		istringstream ss(y1.substr(4,2));
		int y1_month;
		ss>>y1_month;
		istringstream sss(y1.substr(6,2));
		int y1_day;
		sss>>y1_day;
		days[0].year=y1_year;
		days[0].month=y1_month;
		days[0].day=y1_day;
		istringstream s2(y2.substr(0,4));
		int y2_year;
		s2>>y2_year;
		istringstream ss2(y2.substr(4,2));
		int y2_month;
		ss2>>y2_month;
		istringstream sss2(y2.substr(6,2));
		int y2_day;
		sss2>>y2_day;
		days[1].year=y2_year;
		days[1].month=y2_month;
		days[1].day=y2_day;
		sort(days,days+2,cmp);
		
		int sum_min=jt(days[0].year,days[0].month,days[0].day);
		int sum_max=jt(days[1].year,days[1].month,days[1].day);
		int t=days[1].year-days[0].year;
		if(t==0)
		{
			cout<<sum_max-sum_min+1<<endl;
		}
		else
		{
			int s=0;
			for(int i=1;i<=t;i++)
			{
				if(((days[0].year+i-1)%4==0 && (days[0].year+i-1)%100!=0 ) || (days[0].year+i-1)%400==0)
				{
					s+=366;
				}
				else
				{
					s+=365;
				}
			}
			s+=sum_max;
			
			cout<<s-sum_min+1<<endl;
		}
		
		
	}
	return 0;
}
