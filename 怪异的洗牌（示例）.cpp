#include <iostream>
#include <algorithm>
using namespace std;
int n;
int buff[1001];
void shift(int x) {
    reverse(buff+1,buff+x+1);
    reverse(buff+x+1,buff+n+1);
    reverse(buff+1,buff+n+1);
}
void flip() {
    int s = (n%2==0)?n/2:(n-1)/2;
    reverse(buff+1,buff+s+1);
}
int main(void) {
    while(cin >> n) {
        if(n==0) break;
        for(int i = 1;i <= n;i++) buff[i] = i;
        int k,x;
        cin >> k;
        while(k--) {
            cin >> x;
            shift(x);
            flip();
        }
        for(int i = 1;i <= n;i++) cout << buff[i] << " ";
        cout << endl;
    }
    return 0;
}
