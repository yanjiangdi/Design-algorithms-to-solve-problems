#include <iostream>
using namespace std;
int jumpFloorII(int number) {
        int method = 0;
        if(number==0)return 1;
        for(int i=1;i<=number;i++){
            method += jumpFloorII(number-i);
        }
        return method;
    }
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<jumpFloorII(n)<<endl;
	}
	return 0;
}



