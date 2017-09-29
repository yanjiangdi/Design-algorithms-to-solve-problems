#include <iostream>
using namespace std;
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
	int day, year, m;
	string month;
	while(cin>>day>>month>>year)
	{
			if(month=="January") m=1;
			else if(month=="February") m=2;
			else if(month=="March") m=3;
			else if(month=="April") m=4;
			else if(month=="May") m=5;
			else if(month=="June") m=6;
			else if(month=="July") m=7;
			else if(month=="August") m=8;
			else if(month=="September") m=9;
			else if(month=="October") m=10;
			else if(month=="November") m=11;
			else if(month=="December") m=12;

		
		int sum_day=jt(year,m,day);
		int da=sum_day;
		for(int i=1;i<year;i++)
		{
			 if((i%4==0 && i%100!=0 ) || i%400==0)
			 {
			 	da+=366;
			 } 
			 else
			 {
			 	da+=365;
			 }
		} 
		int d=da%7;
		string week;
		switch(d)
		{
			case 0:
				week="Sunday";
				break;
			case 1:
				week="Monday";
				break;	
			case 2:
				week="Tuesday";
				break;
			case 3:
				week="Wednesday";
				break;
			case 4:
				week="Thursday";
				break;
			case 5:
				week="Friday";
				break;	
			case 6:
				week="Saturday";
				break;
			default:
				week="";
				break;	
		}
		
		cout<<week<<endl;
	} 
	return 0;
}

