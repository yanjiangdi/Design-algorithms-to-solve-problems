#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    while(true)
    {
        int a,b;
        int count = 0;
        int xmax = INT_MIN;
        int xmin = INT_MAX;
        int ymax =INT_MIN;
        int ymin = INT_MAX;
        while(cin>>a>>b,a!=0||b!=0)
        {
            xmax = max(xmax,a);
            xmin = min(xmin,a);
            ymax = max(ymax,b);
            ymin = min(ymin,b);
            count++;
        }
        if(count == 0)
            break;
        else
        {
            cout<<xmin<<' '<<ymin<<' '<<xmax<<' '<<ymax<<endl;
        }
 
    }
    return 0;
}
