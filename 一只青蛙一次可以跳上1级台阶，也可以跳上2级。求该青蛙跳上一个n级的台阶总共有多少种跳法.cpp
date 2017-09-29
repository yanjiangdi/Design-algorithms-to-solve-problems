#include <iostream>
using namespace std;
int jumpFloor(int number) {
        if(number==1)
		{
			return 1;
		}
		if(number==2)
		{
			return 2;
		}
		long long f1=1;
		long long f2=2;
		if(number>2)
		{
			for(int i=3;i<=number;++i)
			{
				f2+=f1;
				f1=f2-f1;
			}
		}
		return f2;
		
    }
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<jumpFloor(n)<<endl;
	}
	return 0;
}


