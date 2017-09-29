#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int num[10];
	while(cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]>>num[5]>>num[6]>>num[7]>>num[8]>>num[9])
	{	
		sort(num,num+10);
		cout<<"max="<<num[9]<<endl;
	}
	return 0;
}
