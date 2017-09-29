#include <iostream>
 
using namespace std;
 
/**
   动态规划: dp[]数组记录后面比他小的数字的个数
*/
int main()
{
    int k = 0;
    int a[50] = {0};
 
    while(cin>>k)
    {
        for(int i = k-1;i>=0;i--)
            cin>>a[i];
        int dp[50] = {0};
 
        dp[0] = 1;
        int maxx = 0;
        for(int i = 0;i<k;i++)
        {
            for(int j = 0;j<i;j++)
            {
                if(a[i]>=a[j]) dp[i] = max(dp[j]+1,dp[i]);
 
            }
            if(dp[i]==0) dp[i] = 1;
        }
        for(int i = 0;i<k;i++) maxx = max(maxx,dp[i]);
        cout<<maxx<<endl;
    }
    return 0;
}
