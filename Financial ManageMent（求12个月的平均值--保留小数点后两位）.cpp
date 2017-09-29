#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
	double money[12]={0};
	while(cin>>money[0]>>money[1]>>money[2]>>money[3]>>money[4]>>money[5]>>money[6]>>money[7]>>money[8]>>money[9]>>money[10]>>money[11])
	{
		double sum=0;
		for(int i=0;i<12;i++)
		{
			sum+=money[i];
		}
		cout<<"$";
		cout<<setprecision(2)<<fixed<<sum/12<<endl;
	}
    return 0;
}
