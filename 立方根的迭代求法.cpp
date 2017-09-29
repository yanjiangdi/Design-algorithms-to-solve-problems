#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x;
	int n;
	while(cin>>x>>n)
	{
		double value=x;
		for(int i=0;i<n;i++)
		{
			value=(value*2/3)+(x/(3*value*value));
		}
		
		cout<<setiosflags(ios::fixed)<<setprecision(6)<<value<<endl;
	}
	return 0;
}
