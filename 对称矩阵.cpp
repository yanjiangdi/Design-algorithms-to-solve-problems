#include <iostream>
using namespace std;
int main()
{
l:
	int n;
	int max[100][100]; 
	while(cin>>n)
	{
		while(n<1 || n>100)
		{
			cout<<"输入有误，请输入1-100之间的整数："<<endl;
			cin>>n;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>max[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				if(max[i][j]!=max[j][i])
				{
					cout<<"No!"<<endl;
					goto l;
				}
			}
		}
		cout<<"Yes!"<<endl;
	}
	return 0;
}
