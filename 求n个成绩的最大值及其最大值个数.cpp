#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,num=0;
	cout<<"������ɼ�������";
	cin>>n;
	int score[n];
	cout<<"������"<<n<<"���ɼ���"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>score[i];
	}
	sort(score,score+n);
	for(int i=0;i<=n;i++)
	{
		if(score[i]==score[n-1])
		{
			num++;
		}
	}
	cout<<"�����Ϊ��"<<score[n-1]<<endl
		<<"���������Ϊ��"<<num<<endl;
	return 0;
 } 
