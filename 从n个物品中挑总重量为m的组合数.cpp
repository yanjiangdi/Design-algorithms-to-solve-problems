#include<iostream>
#include<cstdio>
using namespace std;

const int maxn = 21;
int v[maxn];        // �洢ÿ����Ʒ���
int bite[maxn];     // ���ڱ�������Ʒ�Ƿ���������Ķ�����
int count = 0;      // ������
int total = 0;      // ��Ʒ������


void solve(int num, int n)
{
    if(n == 0)
    {
        // û��ʣ���ݻ�����һ�ַ���
        ++count;
        return ;
    }
    if(num == total)
    {
        // �ŵ����Ҳû�н���
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