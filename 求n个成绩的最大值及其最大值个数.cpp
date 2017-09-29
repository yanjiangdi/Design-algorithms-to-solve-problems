#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,num=0;
	cout<<"请输入成绩个数：";
	cin>>n;
	int score[n];
	cout<<"请输入"<<n<<"个成绩："<<endl;
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
	cout<<"最大数为："<<score[n-1]<<endl
		<<"最大数个数为："<<num<<endl;
	return 0;
 } 
