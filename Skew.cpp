#include <iostream>
#include <math.h>
using namespace std;

int main() {
    string str;
    while(cin>>str && str!="0")
    {
        int sum=0;
        int m=1;
        for(int i=str.length()-1;i>=0;i--)
        {
            sum+=(str[i]-'0')*(long)(pow(2,m)-1);
            m++;
        }
        cout<<sum<<endl;
    }
    return 0;
}