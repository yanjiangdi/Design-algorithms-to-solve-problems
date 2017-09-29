#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

void toN(long long m,long long num)
{
	if(num==0) cout << 0<<endl;
	else 
	{
		string str="";
		while(num!=0)
		{
			stringstream ss;
			ss<<(num%m);
			str=ss.str()+str;
			num/=m;
		}
		cout<<str<<endl;	
	}
}
 
int main(){
    long long  m,A,B;
    while(cin>>m && m)
	{
    	cin>>A>>B;
    	long long  sum=A+B;
    	toN(m,sum);
    }
    return 0;
}
