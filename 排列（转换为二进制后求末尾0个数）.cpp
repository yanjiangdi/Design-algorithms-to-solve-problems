#include<iostream>
using namespace std;
 
int main()
{
    int m,n;
    while(cin>>n>>m && n )
    {
        int sum=0;
        for(int i=n;i>(n-m);--i)
        {
            int wei=0,t=i;
            while(t!=0)
            {
                if(t%2!=0)
                    break;
                ++wei;
                t/=2;
            }
            sum+=wei;
        }
        cout<<sum<<endl;
    }
    return 0;
}
