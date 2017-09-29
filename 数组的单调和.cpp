#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int calcMonoSum(vector<int> A, int n) {
        // write code here
		int sum=0;
		for(int i=1;i<n;i++)
		{
			int s=0;
			for(int j=0;j<i;j++)
			{
				if(A[j]<=A[i])
				{
					s+=A[j];
				}
			}
			sum+=s;
		}
		
		return sum;
	}
int main()
{
	int n;
	string s; 
	while(cin>>n)
	{
		vector<int> v;
		for(int i=0;i<n;i++)	
		{
			int t;
			cin>>t;
			v.push_back(t);	
		} 
		
		cout<<calcMonoSum(v,n)<<endl;
	}
	return 0;
}
