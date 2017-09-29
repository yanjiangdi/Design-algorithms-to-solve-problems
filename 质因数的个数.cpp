#include<iostream>
#include<math.h>
using namespace std;
bool isZ(long n) 
{
    if(n==2)return true;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}

int main()
{
    long n;
    while(cin>>n)
    {
    	int count=0;
    	if(isZ(n))
    	{
    		cout<<1<<endl;
		}
		else
		{
			while(!isZ(n))
			{
				for(int i=2;i<=sqrt(n);i++)
				{
					if(n%i==0 && isZ(i))
					{
						count++;
						n=n/i;
						break;
					}	
				}				
			}
			cout<<count+1<<endl;
		}
	
		    
	} 
    return 0;
}
