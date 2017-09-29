#include <iostream>
#include <cmath>
using namespace std;
    double Power(double base, int exponent) {
    	return pow(base,exponent);
    }
  double Power2(double base, int exp) {
        int ex=abs(exp);
        double res=1.0;
        double cur=base;
        while(ex!=0){
            if(ex&1)
               res*=cur;
            cur*=cur;
            ex>>=1;
        }
        return exp>0?res:1/res;
    }  
    int main()
    {
    	double base;
		int ex;
    	while(cin>>base>>ex)
    	{
    		
    		cout<<Power(base,ex)<<" "<<Power(base,ex)<<endl;
		}
    	return 0;
	}
