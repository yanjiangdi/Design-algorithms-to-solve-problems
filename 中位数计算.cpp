#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin>>n && n)
    {
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n);
        if(n%2==0)
        {
            cout<<(b[n/2-1]+b[n/2])/2<<endl;
        }
        else
        {
            cout<<b[n/2]<<endl;
        }

    }
    return 0;
}
