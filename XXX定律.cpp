#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

int main(){
    int num;
    while(cin>>num && num)
	{
    	int count=0;
    	while(num!=1)
    	{
    		if(num%2==0)
    		{
    			num/=2;	
    			count++;
			}
			else
			{
				num=(num*3+1)/2;
				count++;
			}
		}
		cout<<count<<endl; 
    }
    return 0;
}
