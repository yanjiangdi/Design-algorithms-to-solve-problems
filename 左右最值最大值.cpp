#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int findMaxGap(vector<int> A, int n) {
        // write code here
        vector<int> v;
        
        for(int k=0;k<=n-2;k++)
        {
        	vector<int> left;
        	for(int j=0;j<=k;j++)
			{
				left.push_back(A[j]);
			} 
			 vector<int> right;
			 for(int m=k+1;m<=n-1;m++)
			 {
				right.push_back(A[m]);
			 } 
			 sort(left.begin(),left.end());
			 sort(right.begin(),right.end());
			 
			 v.push_back(abs(left[left.size()-1]-right[right.size()-1]));
			 
		}
		sort(v.begin(),v.end());
		return v[v.size()-1]; 
        
    }
    
int main()
{
	int n;
	while(cin>>n)
	{
		vector<int> A;
		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			A.push_back(t);
		}
		
		cout<<findMaxGap(A,n)<<endl;
		
       
	}
	return 0;
}
