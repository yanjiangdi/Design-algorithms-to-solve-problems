#include<iostream>
using namespace std;
int main()
{
    int a,c;
    char b;
    while(cin>>a>>b)
    {
        if(b=='+')
        {cin>>c;
        cout<<a+c<<endl;}
        if(b=='-')
        {   cin>>c;
        cout<<a-c<<endl;}
        if(b=='*')
        {cin>>c;
        cout<<a*c<<endl;}
        if(b=='/')
        {
            cin>>c;
            if(c==0)
                cout<<"error"<<endl;
            else
                cout<<a/c<<endl;
        }
        if(b=='%')
        {
            cin>>c;
            if(c==0)
                cout<<"error"<<endl;
            else
                cout<<a%c<<endl;
        }
        if(b=='!')
        {
            int i,sum=1;
            for(i=1;i<=a;i++)
                sum=sum*i;
            cout<<sum<<endl;
        }
    }
    return 0;
}
