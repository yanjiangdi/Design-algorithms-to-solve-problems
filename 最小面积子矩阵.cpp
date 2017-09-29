#include <iostream>
#include <cstring>
using namespace std;
 
int matrix[110][110];
int num[110];
int N,M;
int K;
 
void my_merge(int i,int j)
{
    for(int p = 0;p<N;p++)
    {
        for(int q = i;q <= j; q++)
            num[p] += matrix[p][q];
    }
}
 
int findShort()
{
    int start = 0,e = 0;
    int sum = 0;
    int len = N;
    int ans = len+1;
    bool flag = false;
 
    while(e < len)
    {
        if(sum < K) sum += num[e];
        while(sum >= K)
        {
            flag = true;
            ans  = min(ans,e-start+1);
            sum -= num[start++];
        }
        e++;
    }
    if(flag) return ans;
    else return N*M;
}
int main()
{
 
    while(cin>>N>>M>>K)
    {
        int sum = 0;
        for(int i = 0;i<N;i++)
        {
            for(int j = 0;j<M;j++)
            {
                cin>>matrix[i][j];
                sum += matrix[i][j];
            }
        }
        if(sum < K) cout<<-1<<endl;
        else
        {
            int minn = N*M;
            for(int i = 0;i<M;i++)
            {
                for(int j = i;j<M;j++)
                {
                    memset(num,0,sizeof(num));
                    my_merge(i,j);
                    int tmp = findShort();
                    tmp = (j-i+1)*tmp;
                    if(minn > tmp) minn = tmp;
                }
            }
            cout<<minn<<endl;
        }
    }
    return 0;
}
