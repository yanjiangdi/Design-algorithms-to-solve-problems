#include<iostream>
using namespace std;
int reverse(int num)
{
    int res=0;
    while(num)
    {
        int lei=num%10;
        res=res*10+lei;
        num/=10;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int a1=reverse(a);
        int b1=reverse(b);
        int c1=reverse(a+b);
        if(a1+b1==c1)
            cout<<a+b<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
