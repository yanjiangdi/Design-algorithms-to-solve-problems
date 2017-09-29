#include <iostream>
using namespace std;
int main()
{
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day;
	int sum=0;
	while(cin>>year>>month>>day)
	{
	
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
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
	
}
