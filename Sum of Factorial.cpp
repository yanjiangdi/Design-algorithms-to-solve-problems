#include<iostream>
using namespace std;
int main()
{
    int factorial[10];
    int i;
    factorial[0]=1;
    for(i=1;i<10;i++)
    {
        factorial[i]=factorial[i-1]*i;
    }
    int n;
    while(cin>>n)
    {
        for(int k=9;k>=0;k--)
        {
            if(n>=factorial[k])
                n-=factorial[k];
            if(n==0)
                break;
        }
        if(n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            
    }
    return 0;
}


