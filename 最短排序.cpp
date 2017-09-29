#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

    int findShortest(vector<int> A, int n) {
        // write code here
        int t[n],res = 0;
        for(int i = 0; i < n; ++i) t[i] = A[i];
        sort(A.begin(),A.end());
        int Left = -1,Right = -1 ;
        for(int i = n - 1; i >= 0; --i){
            if(t[i] != A[i]){
                Right = i;
                break;
            }
        }
        for(int i = 0; i < n;++i){
            if(t[i] != A[i]){
                Left = i;
                break;
            }
        }
        if(Left == Right && Left == -1) return 0;
        else return Right - Left + 1;
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
			
			cout<<findShortest(A,n)<<endl;
	    
		}
			return 0;
	}

