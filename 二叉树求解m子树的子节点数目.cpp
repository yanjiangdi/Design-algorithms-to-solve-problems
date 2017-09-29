#include<iostream>
#include <cmath>
using namespace std;
int main() {
    int n, m, base, res, b, e;
    while (cin >> m >> n) {
        if (n == 0 & m == 0)break;
        int h1=(int)(log(m)/log(2));
        int  h2=(int)(log(n)/log(2));
        int sum=0;
        int t1=pow(2,h2-h1)*m;
        int t2=m;
    	for(int i=0;i<h2-h1;i++)
    	{
    		t2=2*t2+1;
		}
		if(n<t1)
		{
			for(int i=0;i<h2-h1;i++)
			{
				sum+=pow(2,i);
			}
		}
		if(n>t2)
		{
			for(int i=0;i<=h2-h1;i++)
			{
				sum+=pow(2,i);
			}
		}
		if(n>=t1 && n<=t2)
		{
			
			for(int i=0;i<h2-h1;i++)
			{
				sum+=pow(2,i);
			}
			
			sum+=n-pow(2,h2-h1)*m+1;
		}
		
		cout<<sum<<endl;
    }
}
