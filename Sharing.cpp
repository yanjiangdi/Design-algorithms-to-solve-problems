#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
 
int main()
{
    int next[99999];
    char node[99999];
    int add1,add2,pt,len,len1,len2,a,c,add,flag;
    char b;
    while(~scanf("%d%d%d",&add1,&add2,&pt))
    {
        len1=len2=1;
        while(pt--)
        {
            scanf("%d %c %d",&a,&b,&c);
            next[a]=c;
            node[a]=b;
        }
 
        a=add1;
        while(next[a]!=-1)
        {
            a=next[a];
            len1++;
        }
        a=add2;
        while(next[a]!=-1)
        {
            a=next[a];
            len2++;
        }
 
        if(len1>=len2)
        {
            a=len1-len2;
            while(a--) add1=next[add1];
        }
        else
        {
            a=len2-len1;
            while(a--) add2=next[add2];
        }
 
        add=-1;
        flag=0;
        len=min(len1,len2);
        while(len--)
        {
            if(node[add1]==node[add2])
            {
                if(flag==0)
                {
                    add=add1;
                    flag=1;
                }
 
                add1=next[add1];
                add2=next[add2];
            }
            else
            {
                flag=0;
                add=-1;
                add1=next[add1];
                add2=next[add2];
            }
        }
        if(add==-1)
            printf("-1\n");
        else
            printf("%05d\n",add);
 
    }
    return 0;
}
