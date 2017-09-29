#include <iostream>
#include <cmath>
using namespace std;
int count_ys(int n)
{
	int num=0;
	if (n == 1)     num = 1;
	else {
	    num = 2;
	     for (int i = 2; i<sqrt(n); i++) {
	         if (n%i == 0)   num += 2;
	     }
	    int n1 = (int)sqrt(n);
	    if (n%n1 == 0 && n1*n1 == n)     num ++;
	    }
	return num;

}
int main()
{
	int num;
	while(cin>>num)
	{
		int n[num];
		for(int i=0;i<num;i++)
		{
			cin>>n[i];
			cout<<count_ys(n[i])<<endl;
		}
	}
	return 0;
}
