#include  <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n<1 || n>100)
		{
			cin>>n; 
		}
		double sum=0;
		for(int i=0;i<n;i++)
		{
			int score;
			cin>>score;
			sum+=score;
		}
		cout<<setprecision(2)<<fixed<<sum/n<<endl; 
	}
	return 0;
}
