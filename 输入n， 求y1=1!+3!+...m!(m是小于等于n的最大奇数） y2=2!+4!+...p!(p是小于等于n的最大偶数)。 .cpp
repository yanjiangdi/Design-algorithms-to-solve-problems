#include <iostream>
using namespace std;
int jc(int number);
void y(int number);
int main()
{
	int number;
	while(cin>>number)
    {
       	y(number); 
    }

	return 0;
}

int jc(int number)
{
	if(number==1)
	{
		return 1;
	}
	if(number>1)
	{
		return number*jc(number-1);
	}
	return 0;
}

void y(int number)
{
	int y1=0,y2=0;
	if(number%2==0)
	{
		for(int i=1;i<=number-1;i+=2)
		{
			y1+=jc(i);
		}
		for(int i=2;i<=number;i+=2)
		{
			y2+=jc(i);
		}
	}
	else
	{
		for(int i=1;i<=number;i+=2)
		{
			y1+=jc(i);
		}
		for(int i=2;i<=number-1;i+=2)
		{
			y2+=jc(i);
		}
	}
	cout<<y1<<" "<<y2<<endl; 
}
