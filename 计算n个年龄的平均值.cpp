#include<iostream.h>
#include<vector>
using namespace std;
int main(){
	int n,sumAge,aveAge;
	cout<<"����������ĸ�����";
	cin>>n;
	vector<int>age(n);
	cout<<endl<<"������"<<n<<"�����䣺";
	for(int i=0;i<n;++i)
		cin>>age[i];
	sumAge=0;
	for(i=0;i<n;++i)
		sumAge+=age[i];
	aveAge=sumAge/n;
	cout<<"ƽ�����䣺"<<aveAge<<endl;
	return 0;
}

