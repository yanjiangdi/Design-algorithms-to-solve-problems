#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
double all;
void find(double f,double q,double mm[],int k,int n)
{
    if(k<n)
    {
        if(f+mm[k]<=q)
        {
            if(f+mm[k]>all)
                all=f+mm[k];
            find(f+mm[k],q,mm,k+1,n);
        }
        find(f,q,mm,k+1,n);
    }
    
}
    
int main()
{
    double q,num,price,pa,pb,pc,mm[35];
    char type,ss[100];
    int n,m,flag,i,k;
    while(scanf("%lf%d",&q,&n) && n)
    {
        all=0;
        for(i=0,k=0;i<n;i++)
        {
            num=0;
            flag=0;
            scanf("%d",&m);
            pa=pb=pc=0;
            while(m--)
            {
                getchar();
                type=getchar();
                getchar();
                scanf("%lf",&price);
                if(type!='A' && type!='B' && type!='C')
                    flag=1;
                else if(type == 'A')
                    pa+=price;
                else if(type == 'B')
                    pb+=price;
                else if(type == 'C')
                    pc+=price;
            }
            getchar();
            num=pa+pb+pc;
            if(num>1000 || pa>600 || pb>600 || pc>600 || flag==1)
            {
                continue;
            }
            mm[k++]=num;
        }
        find(0,q,mm,0,k);
        printf("%.2f\n",all);
    }
    return 0;
}