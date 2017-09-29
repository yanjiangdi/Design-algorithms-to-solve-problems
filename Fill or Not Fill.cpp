#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
struct node{
    double p;
    double dis;
}sta[510];
bool cmp(const node a,const node b)
{
    return a.dis<b.dis;
}
int main()
{
    int cmax,d,davg,n,i,j,k;
    double tmp,ans,mdis,rest;
    while(~scanf("%d%d%d%d",&cmax,&d,&davg,&n))
    {
        for(i=0;i<n;i++)
            scanf("%lf%lf",&sta[i].p,&sta[i].dis);
        sta[n].dis=d;
        sta[n].p=9999999;
        sort(sta,sta+n,cmp);
        if(sta[0].dis>0)
            printf("The maximum travel distance = 0.00\n");
        else{
            ans=rest=0;
            mdis=cmax*davg;
            for(i=0;i<n;i++)
            {
                k=i+1;
                if(i!=0)
                    rest-=(double)(sta[i].dis-sta[i-1].dis)/davg;
                for(;k<n&&sta[k].p>=sta[i].p;k++);
              
                if(sta[k].dis-sta[i].dis>mdis)
                {
                    ans+=(cmax-rest)*sta[i].p;
                    rest=cmax;                
                }
                else
                {
                    tmp=(double)(sta[k].dis-sta[i].dis)/davg-rest;
                    if(tmp>0&&fabs(tmp)>1e-5)
                    {
                        ans+=tmp*sta[i].p;
                        rest=(double)(sta[k].dis-sta[i].dis)/davg;
                    }
  
                }
                if(sta[i+1].dis-sta[i].dis>mdis)
                {
                    printf("The maximum travel distance = %.2f\n",sta[i].dis+mdis);
                    break;
                }
            }
            if(i==n)
                printf("%.2f\n",ans);
        }
  
    }
  
    return 0;
    
}
