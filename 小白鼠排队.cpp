#include <iostream>
#include <algorithm> 
#include <cstring>
using namespace std;
struct xbs
{
    int weight;
    string color;
};
bool cmp(xbs b1,xbs b2)
{
    return b1.weight>b2.weight;
}
int main() 
{
    int n;
    while (cin>>n)
    {
        xbs b[100]={0};
        for(int i=0;i<n;i++)
        {
            cin>>b[i].weight>>b[i].color;
        }
        sort(b,b+n,cmp);
        for(int i=0;i<n;i++)
        {
            cout<<b[i].color<<endl;
        }

    }
    return 0;
}
