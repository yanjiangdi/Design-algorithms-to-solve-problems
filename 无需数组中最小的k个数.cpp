#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> findKthNumbers(vector<int> A, int n, int k) {
        // write code here
        vector<int> A_copy;
        for(int i=0;i<n;i++)
        {
        	A_copy.push_back(A[i]);
		}
        sort(A.begin(),A.end());
        vector<int> v;
        for(int i=0;i<k;i++)
        {
        	v.push_back(A[i]);
		}
		vector<int> v2;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<k;j++)
			{
				if(A_copy[i]==v[j])
				{
					v2.push_back(v[j]);
					break;
				}
			}
		}
		return v2;
    }
    
    
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		vector<int> A;
		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			A.push_back(t);
		}
        vector<int> v2=findKthNumbers(A,n,k);
         
		for(int i=0;i<k-1;i++)
        {
        	cout<<v2[i]<<"  "; 
		}
		cout<<v2[k-1]<<endl;
		
		
	}
	return 0;
}
