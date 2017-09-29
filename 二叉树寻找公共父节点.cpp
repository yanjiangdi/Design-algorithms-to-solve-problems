#include <iostream>
#include <math.h>
using namespace std;
int pub(int m,int n)
{
        while (m>=1) {
            int r1 = (int) (log(n) / log(2));
            int r2 = (int) (log(m) / log(2));
            int l = m * pow(2, r1 - r2);
            int r = m;
            for (int i = 0; i < r1 - r2; i++) {
                r = r * 2 + 1;
            }
            if (n >= l && n <= r) {
                return m;
            } else {
                m/= 2;
            }
        }


    return 0;
}
int main() {
    int m,n;
    while(cin>>m>>n)
    {
        if(m<n)
       {
            cout<<pub(m,n)<<endl;
       }
        else if(m==n)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<pub(n,m)<<endl;
        }
    }
    return 0;
}