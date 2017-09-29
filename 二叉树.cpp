#include<iostream>
using namespace std;
int main() {
    int n, m, base, res, b, e;
    while (cin >> m >> n) {
        if (n == 0 & m == 0)break;
        base = 1;
        b = e = m;
        res = 1;
        while (n > 2 * e + 1) {
            e = 2 * e + 1;
            b = 2 * b;
            base *= 2;
            res += base;
            m = 2 * m + 1;
        }
        if (n >= 2*b) {
            res += n - 2*b + 1;
        }
        cout << res << endl;
    }
}
