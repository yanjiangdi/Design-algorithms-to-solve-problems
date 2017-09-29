#include <iostream>
#include <algorithm>
using namespace std;
struct ks
{
	string numid;
	int ts;
	int sum;
};

bool cmp(ks k1,ks k2)
{
	if(k1.sum!=k2.sum)
	{
		return k1.sum>k2.sum;
	}
	return k1.numid<k2.numid;
}
int main()
{
	int num_p,num_t,sline;
	while(cin>>num_p && num_p)
	{
		cin>>num_t>>sline ;
		int t[num_t];
		for(int i=0;i<num_t;i++)
		{
			cin>>t[i];
		}
		ks k[1000];
		ks k_th[1000];
		int count=0;
		for(int i=0;i<num_p;i++)
		{
			cin>>k[i].numid;
			cin>>k[i].ts;
			int sumS=0;
			for(int j=0;j<k[i].ts;j++)
			{
				int s=0;
				cin>>s;
				sumS+=t[s-1];	
			}
			k[i].sum=sumS;
			if(k[i].sum>=sline)
			{
				k_th[count].numid=k[i].numid;
				k_th[count].ts=k[i].ts;
				k_th[count].sum=k[i].sum;
				count++;	
			}

		}
		sort(k_th,k_th+count,cmp);
		cout<<count<<endl;
		for(int i=0;i<count;i++)
		{
			cout<<k_th[i].numid<<" "<<k_th[i].sum<<endl;
		}

	}
	return 0;
}
