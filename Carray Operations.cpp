#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    int m, n, carry, ans;
    while (cin>>m>>n && m && n){
        ans = carry = 0;
        while (m || n || carry){
            carry = (carry+m%10+n%10)/10;
            if (carry) ans++;
            m/=10, n/=10;
        }
        if (!ans) cout<<"NO carry operation."<<endl;
        else if (ans==1) cout<<ans<<" carry operation."<<endl;
        else cout<<ans<<" carry operations."<<endl;
    }
    return 0;
}
