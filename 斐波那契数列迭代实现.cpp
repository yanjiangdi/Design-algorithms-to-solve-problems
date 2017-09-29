 #include <iostream>
using namespace std;

int Fibonacci(int n) {
	if(n==1 || n==2)
	{
		return 1;
	}
	int a=1,b=1;
	int sum=0;
	for(int i=3;i<=n;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
	}
	return sum;
}
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<Fibonacci(n)<<endl;	
	}

	return 0;
}
 
