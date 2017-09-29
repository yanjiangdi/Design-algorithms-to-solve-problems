#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
	double num[12]={0};
	while(cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]>>num[5]>>num[6]>>num[7]>>num[8]>>num[9]>>num[10]>>num[11])
	{
		double sum=0;
		for(int i=0;i<12;i++)
		{
			sum+=num[i];
		}
		cout<<"$";
		cout<<setprecision(2)<<fixed<<sum/12<<endl;
	}
    return 0;
}
