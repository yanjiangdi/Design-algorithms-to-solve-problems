#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int k)
{
	if(k==1) return false;
	if( k == 2)
        return true;
    for(int i = 2;i<=sqrt(k);i++){
        if(k%i == 0)
            return false;
    }
    return true;
}
int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		int i=1;
		while(count<n)
		{
			if(isPrime(i))
			{
				count++;
			}
			i++;
			
		}
		cout<<i-1<<endl;
		
	} 
	
	return 0;
}
