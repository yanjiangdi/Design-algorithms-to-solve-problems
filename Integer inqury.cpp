#include<iostream>
#include<cstring>
 
using namespace std;
 
int main() {
    char c[111];
    int tmp[111];
    int d[111];
    memset(tmp, 0, sizeof(tmp));
    while (cin >> c) {
        if (strlen(c)==1 && c[0] == '0')
            break;
        memset(d, 0, sizeof(d));
        d[0] = strlen(c);
        for (int i = 0; i < d[0]; i++) {
            d[d[0] - i] = c[i] - 48;
        }
        while (d[d[0]] == 0)
            d[0]--;
        int carry = 0;
        tmp[0] = tmp[0] > d[0] ? tmp[0] : d[0];
        for (int i = 1; i <= tmp[0]; i++) {
            int tt = (d[i] + tmp[i] + carry) % 10;
            carry = (d[i] + tmp[i] + carry) / 10;
            tmp[i] = tt;
        }
        if (carry > 0) {
            tmp[++tmp[0]] = carry;
        }
    }
    for (int i = tmp[0]; i >= 1; i--) {
        cout << tmp[i];
    }
    cout << endl;
    return 0;
}


