#include <iostream>
using namespace std;

bool isSeven(int n)
{
    if(n%7==0 || n%10==7 || (n/10)%10==7)
    {
        return true;
    }
    return false;
}
int main() {
    int n;
    while(cin>>n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            if(!isSeven(i))
            {
                sum+=i*i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}