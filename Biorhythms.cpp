#include <iostream>
using namespace std;
int main() {
    int p, e, i, d;
    int j = 0;
    while (cin >> p >> e >> i >> d) {
        j++;
        if (d == -1) {
            break;
        }
        for (int n = 0;; n++) {
            int m = n * 23;
            if(((m + p - e) % 28 == 0) && ((m + p - i) % 33 == 0)){
                if (m + p > d) {
                    cout << "Case " << j << ": the next triple peak occurs in " << m + p - d << " days." << endl;
                    break;
                } else {
                    cout << "Case " << j << ": the next triple peak occurs in " << m + p - d + 21252 << " days." << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
