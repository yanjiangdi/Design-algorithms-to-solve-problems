#include<iostream.h>
#include<vector>
using namespace std;
int main(){
	int n,sumAge,aveAge;
	cout<<"请输入年龄的个数：";
	cin>>n;
	vector<int>age(n);
	cout<<endl<<"请输入"<<n<<"个年龄：";
	for(int i=0;i<n;++i)
		cin>>age[i];
	sumAge=0;
	for(i=0;i<n;++i)
		sumAge+=age[i];
	aveAge=sumAge/n;
	cout<<"平均年龄："<<aveAge<<endl;
	return 0;
}

