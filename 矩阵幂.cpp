#include<iostream>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    while (T-- > 0)
    {
        int a[10][10], b[10][10], temp[10][10], n, k;
        cin >> n >> k;
        for (int i = 0;i < n;++i)
            for (int j = 0;j < n;++j)
            {
                cin >> a[i][j];
                temp[i][j] = a[i][j];
            }
        for (int z = 1;z < k;++z) {
            for (int i = 0;i < n;++i)
                for (int j = 0;j < n;++j)
                {
                    int sum = 0;
                    for (int x = 0;x < n;++x)
                        sum += a[i][x] * temp[x][j];
                    b[i][j] = sum;
                }
            for (int i = 0;i < n;++i)
                for (int j = 0;j < n;++j)
                    a[i][j] = b[i][j];
        }
        for (int i = 0;i < n;++i)
            for (int j = 0;j < n;++j)
            {
                if (j == n - 1)
                    cout << a[i][j] << endl;
                else
                    cout << a[i][j] << " ";
            }
    }
 
    return 0;
}