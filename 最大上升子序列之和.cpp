#include<iostream>
 
using namespace std;
 
int main() {
    int N;
    int d[1001], dp[1001], sum[1001];
    while (cin >> N) {
        for (int i = 0; i < N; i++) {
            cin >> d[i];
        }
        int max = 0;
        for (int i = 0; i < N; i++) {
            sum[i] = d[i];
            for (int j = 0; j < i; j++) {
                if (d[j] < d[i]) {
                    sum[i] = sum[j] + d[i] > sum[i] ? sum[j] + d[i] : sum[i];
                }
            }
            if (sum[i] > max)
                max = sum[i];
        }
        cout << max << endl;
    }
    return 0;
}