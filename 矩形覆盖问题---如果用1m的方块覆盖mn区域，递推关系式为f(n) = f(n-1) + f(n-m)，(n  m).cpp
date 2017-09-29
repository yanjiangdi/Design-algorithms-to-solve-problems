#include <iostream>
using namespace std;
int rectCover(int number) {
		if(number==0)
            return 0;
        if(number==1)
            return 1;
        int prevalue=1;
        int preprevalue=1;
        int value;
        for(int i=2;i<=number;i++)
            {
            value=prevalue+preprevalue;
            preprevalue=prevalue;
            prevalue=value;
        }
        return value;
    }
    
    int main()
    {
    	int m;
    	while(cin>>m)
    	{
    		int n;
    		cin>>n;
    		cout<<rectCover(n)<<endl;
		}
    	return 0;
	}
