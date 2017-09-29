#include <iostream>
using namespace std;
 
int f(int B[], int N) {
    int i, max = B[0], sum = 0;
    for (i = 0; i < N; i++) {
        sum += B[i];
        if (sum < B[i])
            sum = B[i];
        if (sum > max)
            max = sum;
    }
    return max;
}
 
int main() {
    int N, A[100][100];
    while (cin >> N) {
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> A[i][j];
        int B[100] = { 0 }, max = 0, sum = 0;
        for (int i = 0; i < N; i++) {       //起始行
            for (int j = i; j < N; j++) {   //终止行
                for (int k = 0; k < N; k++) //列相加
                    B[k] += A[j][k];
                sum = f(B, N);
                if (sum > max)
                    max = sum;
            }
            for (int k = 0; k < N; k++)
                B[k] = 0;
        }
        cout << max << endl;
    }
}
