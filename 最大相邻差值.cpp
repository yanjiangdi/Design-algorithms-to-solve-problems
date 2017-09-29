#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findMaxDivision(vector<int> A, int n) {
        sort(A.begin(),A.end());
        int diff[n-1];
        for(int i=1;i<n;i++)
        {
        	diff[i-1]=A[i]-A[i-1];
		}
		sort(diff,diff+(n-1));
		return diff[n-2];
    }
int main()
{
	int n;
	
		while(cin>>n)
		{
			vector<int> num;
			for(int i=0;i<n;i++)
			{
				int t;
				cin>>t;
				num.push_back(t);
			}
			cout<<findMaxDivision(num,n)<<endl;
		}

	return 0;
}
