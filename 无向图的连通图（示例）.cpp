#include <stdio.h>
#define N 1000
  
int Tree[N];
  
int findRoot(int x)
{
    if (Tree[x] == -1) return x;
    else
    {
        int res = findRoot(Tree[x]);
        Tree[x] = res;
        return res;
    }
}
  
int main ()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        if (!n) break;
  
        for (int i = 1; i <= n; i++)https://www.nowcoder.com/ta/jlu-kaoyan/question-ranking?tpId=65&tqId=29622&uuid=569e89823a5141fe8a11ab7d4da21edf&rp=6
        {
            Tree[i] = -1;
        }
  
        while (m-- != 0)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            a = findRoot(a);
            b = findRoot(b);
            if (a != b) Tree[a] = b;
        }
  
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (Tree[i] == -1)
            {
                ans++;
            }
        }
        if (ans == 1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}