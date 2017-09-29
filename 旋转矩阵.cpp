#include<stdio.h>
#include<iostream>
using namespace std;
 
int main()
{
    int n;
    int mat1[10][10];
    int mat2[10][10];
    while((cin>>n)!=0)
    {
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat1[i][j];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat2[i][j];
 
        int flag=4;
        int f[4]= {0};
 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(mat2[i][j]==mat1[i][j])
                    f[0]++;
                if(mat2[j][n-i-1]==mat1[i][j])
                    f[1]++;
                if(mat2[n-i-1][n-j-1]==mat1[i][j])
                    f[2]++;
                if(mat2[n-j-1][i]==mat1[i][j])
                    f[3]++;
            }
        }
        int pro=n*n;
        for(int i=0; i<4; i++)
        {
            if(f[i]==pro)
            {
                flag=i;
                break;
            }
        }
 
        if(flag==0)
            printf("0\n");
        else if(flag==1)
            printf("90\n");
        else if(flag==2)
            printf("180\n");
        else if(flag==3)
            printf("270\n");
        else
            printf("-1\n");
    }
    return 0;
}
