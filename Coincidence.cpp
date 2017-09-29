#include <iostream>
#include <stdio.h>
#include <string.h>
int d[101][101];
using namespace std;
int main(int argc, const char * argv[]) {
    char s1[101];
    char s2[101];
    while(scanf("%s\n%s",s1,s2)!=EOF)
    {
        long int l1=strlen(s1);
        long int l2=strlen(s2);
        int i,j;
        for(i=0;i<=l1;i++)
            d[i][0]=0;
        for(i=0;i<=l2;i++)
            d[0][i]=0;
        for(i=1;i<=l1;i++)
        {
            for(j=1;j<=l2;j++)
            {
                if(s1[i-1]==s2[j-1])
                    d[i][j]=d[i-1][j-1]+1;
                else
                    d[i][j]=max(d[i-1][j],d[i][j-1]);
                     
            }
        }
        cout<<d[l1][l2]<<endl;
    }
     
    return 0;
}
