#include<iostream>
using namespace std;
bool isS(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return true;
	}
	return false;
}
int max_s(int n[],int num)
{
	int max=0;
	for(int i=0;i<num;i++)
	{
		if(isS(n[i]))
		{
			if(max<n[i])
			{
				max=n[i];
			}
		}
	}
	return max;
}
int main(){
	int n;
	cout<<"���������������";
	cin>>n;
	int a[n];
	cout<<"������"<<n<<"������Ԫ�أ�";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"�����е����������"<<max_s(a,n)<<endl;
	return 0;
}
	
