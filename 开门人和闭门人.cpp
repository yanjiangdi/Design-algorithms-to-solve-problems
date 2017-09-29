#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
struct record
{
	string numebr;
	string time_in;
	string time_out;
};

bool cmp_in(record r1,record r2)
{
	int n1,n2;
	if(r1.time_in.substr(0,2)!=r2.time_in.substr(0,2))
	{
		stringstream ss1(r1.time_in.substr(0,2));
		ss1>>n1;
		stringstream ss2(r2.time_in.substr(0,2));
		ss2>>n2;
		return n1<n2;
	}
	else if(r1.time_in.substr(3,2)!=r2.time_in.substr(3,2))
	{
		stringstream ss1(r1.time_in.substr(3,2));
		ss1>>n1;
		stringstream ss2(r2.time_in.substr(3,2));
		ss2>>n2;
		return n1<n2;
	}
	else
	{
		stringstream ss1(r1.time_in.substr(6,2));
		ss1>>n1;
		stringstream ss2(r2.time_in.substr(6,2));
		ss2>>n2;
		return n1<n2;
	}
}
bool cmp_out(record r1,record r2)
{
	int n1,n2;
	if(r1.time_out.substr(0,2)!=r2.time_out.substr(0,2))
	{
		stringstream ss1(r1.time_out.substr(0,2));
		ss1>>n1;
		stringstream ss2(r2.time_out.substr(0,2));
		ss2>>n2;
		return n1<n2;
	}
	else if(r1.time_out.substr(3,2)!=r2.time_out.substr(3,2))
	{
		stringstream ss1(r1.time_out.substr(3,2));
		ss1>>n1;
		stringstream ss2(r2.time_out.substr(3,2));
		ss2>>n2;
		return n1<n2;
	}
	else
	{
		stringstream ss1(r1.time_out.substr(6,2));
		ss1>>n1;
		stringstream ss2(r2.time_out.substr(6,2));
		ss2>>n2;
		return n1<n2;
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			int m;
			cin>>m;
			record r[m];
			for(int j=0;j<m;j++)
			{
				cin>>r[j].numebr>>r[j].time_in>>r[j].time_out;
			}
			sort(r,r+m,cmp_in);
			cout<<r[0].numebr<<" ";
			sort(r,r+m,cmp_out);
			cout<<r[m-1].numebr<<endl;
		}
	}
	return 0;
}
