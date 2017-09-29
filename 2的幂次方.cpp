#include<iostream>
 
using namespace std;
 
int val[15] = { 1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384 };
 
void solve(int n) {
    if (n == 0)
        return;
    else {
        for (int i = 14; i >= 0; i--) {
            if (n - val[i] >= 0) {
                n = n - val[i];
                if (i > 2) {
                    cout << "2(";
                    solve(i);
                    cout << ")";
                }
                else if (i == 2) {
                    cout << "2(2)";
                }
                else if(i == 1){
                    cout << "2";
                }
                else if (i == 0) {
                    cout << "2(0)";
                }
                if( n > 0)
                    cout << "+";
            }
        }
    }
}
 
int main() {
    int n;
    while (cin >> n) {
        solve(n);
        cout << endl;
    }
    return 0;
}