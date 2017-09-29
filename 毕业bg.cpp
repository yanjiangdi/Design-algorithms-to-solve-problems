#include <iostream>
#include <string.h>
#include <algorithm>
 
using namespace std;
struct node
{
    int d,l,e;
}bg[31];
bool com(node a,node b)
{
    return a.e<b.e;
}
 
int main()
{
    int n;
    while(cin>>n && n>=0)
    {
        int mmax,i,j;
        int ans[60];
        mmax=0;
        memset(ans,0,sizeof(ans));
        for(i=1;i<=n;i++)
        {
            cin>>bg[i].d>>bg[i].l>>bg[i].e;
        }
        sort(bg+1,bg+1+n,com);
        mmax=bg[n].e;
        for(i=1;i<=n;i++)
        {
            for(j=mmax;j>=bg[i].l;j--)
                if(ans[j]<(ans[j-bg[i].l]+bg[i].d))
                    ans[j]=(ans[j-bg[i].l])+bg[i].d;
            for(j=bg[i].e+1;j<=mmax;j++)
                ans[j]=ans[bg[i].e];
        }
        cout<<ans[mmax]<<endl;
    }
    return 0;
}
