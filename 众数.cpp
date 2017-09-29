#include <iostream>
#include <algorithm>
using namespace std;
struct zs
{
	int data,num;
};
bool cmp(zs z1,zs z2)
{
	if(z1.num!=z2.num)
	{
		return z1.num>z2.num;
	}
	return z1.data<z2.data; 

}

int main()
{
	zs z[10];
	int n[20];
	while(cin>>n[0]>>n[1]>>n[2]>>n[3]>>n[4]>>n[5]>>n[6]>>n[7]>>n[8]>>n[9]>>n[10]>>n[11]>>n[12]>>n[13]>>n[14]>>n[15]>>n[16]>>n[17]>>n[18]>>n[19])
	{
		
		for(int i=1;i<=10;i++)
		{
			z[i-1].num=0;
			z[i-1].data=i;
			for(int j=0;j<20;j++)
			{
				if(n[j]==i)
				{
					z[i-1].num++;
				}
			}
		}	
		sort(z,z+10,cmp);
		cout<<z[0].data<<endl;

	}
	return 0;
}
