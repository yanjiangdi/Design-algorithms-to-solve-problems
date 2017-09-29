#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int findArrayMex(vector<int> A, int n) {
        // write code here
    	sort(A.begin(),A.end());
		int r=1;
		for(int i=0;i<n;i++)
		{
			if(A[i]==r)
			{
				r++;
				i=0;
			}
		}
		return r;
}
    
    int main()
    {
    	int n;
    	while(cin>>n)
    	{
    		vector<int> v;
    		for(int i=0;i<n;i++)
    		{
    			int t;
    			cin>>t;
    			v.push_back(t);
			} 
			cout<<findArrayMex(v, n)<<endl;
		}
    	return 0;
	}
