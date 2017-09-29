#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m=0;
	int n=10*30;
	for(int i=1;i<=30;i++)
	{
		m+=(int)pow(2,i-1);
	}
	cout<<n<<" "<<m<<endl;
	return 0;
}
