#include <iostream>
#include <math.h>
using namespace std;
int tran(int number);
int main()
{
	int  n;
	int sum=0;
	int i=0;
	while(cin>>n)
	{
		cout<<tran(n)<<endl;
	}

	return 0;
}
int tran(int number)
{
	int sum=0;
	int i=0;
	while(number)
	{
		sum+=pow(10,i++)*(number%8);
		number/=8;	
	}

	return sum;
}
