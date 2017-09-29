#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
char s[N];
int main() {
    int i, l, f, tmp, idx, a, n;
    while (scanf("%d %d", &a, &n) != EOF) {
        l = 0;
        idx = 0;
        for (i = 0; i < n; ++i) {
            tmp = (n - i) * a + l;
            f = tmp % 10;
            l = tmp / 10;
            s[idx++] = f + '0';
        }
        if (l > 0)
            s[idx++] = l + '0';
        for (i = idx - 1; i >= 0; --i) {
            printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}


