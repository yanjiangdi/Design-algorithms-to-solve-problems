#include <iostream>
#include <cmath>
using namespace std;
 
int num = 8;
int x[9] = {0};
int a[92][9] = {0};
int pos = 0;
 
bool place(int k)
{
    for(int j = 1;j<k;j++)
        if(abs(x[k] - x[j]) == abs(k-j)||x[j] == x[k])
            return false;
        return true;
 
}
void backtrack(int t)
{
    if(t>num) //numΪ�ʺ����Ŀ
    {
        for(int m = 1;m<=num;m++)
        {
            a[pos][m] = x[m];//��һ����������ݹ鵽Ҷ�ڵ��ʱ��һ�����н�
        }
        pos++;
    }
    else
        for(int i = 1;i<=num;i++)
        {
            x[t] = i;
            if(place(t)) backtrack(t+1);//�˴���place����������������������˵���������жϣ����������������һ���ݹ�
        }
}
 
int  main()
{
    for(int i= 0;i<=num;i++)
        x[i] = 0;
    backtrack(1);
  /*  for(int i = 0;i<92;i++)
    {
        for(int j = 1;j<=8;j++)
           cout<<a[i][j];
        cout<<endl;
    }*/
 
    int n = 0;
    while(cin>>n)
    {
        int indes = 0;
       for(int i = 0;i<n;i++)
       {
          cin>>indes;
          indes--;
          for(int j = 1;j<9;j++) cout<<a[indes][j];
          cout<<endl;
       }
    }
    return 0;
}
