#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,c,x,y,z;
	while(cin>>a>>b>>c>>x>>y>>z)
	{
		double r=sqrt(pow(x-a,2)+pow(y-b,2)+pow(z-c,2));
		double v=4*acos(-1)*pow(r,3)/3;
		cout<<setprecision(3)<<fixed<<r<<" "<<v<<endl;
	}
	return 0;
}
