#include<iostream>
#include<cstdio>
using namespace std;

const int maxn = 21;
int v[maxn];        // 存储每个物品体积
int bite[maxn];     // 用于标记这个物品是否出现在最后的队列中
int count = 0;      // 计数器
int total = 0;      // 物品总数量


void solve(int num, int n)
{
    if(n == 0)
    {
        // 没有剩余容积则是一种方法
        ++count;
        return ;
    }
    if(num == total)
    {
        // 放到最后也没有结束
        return ;
    }
    bite[num] = 1;
    solve(num+1, n-v[num]);
    bite[num] = 0;
    solve(num+1, n);
}

int main()
{
    cin >> total;
    for(int i = 0; i < total; ++i)
    {
        cin >> v[i];
    }
    solve(0, 40);
    cout << count <<endl;
    return 0;
}