#include <iostream>
using namespace std;
 
int main() {
    int N;
    while (cin >> N) {
        int A[N][N], max = -100000;
        for (int i = 0; i < N; i++)
            for (int j = 0; j<N; cin>> A[i][j++]); //�������A[N][N]
        for (int i = 1; i <= N; i++) //����(N * N - 1)���Ӿ���ÿ���Ӿ���SΪi��j
            for (int j = 1; j <= N; j++)
                if (i != N && j != N) //��ȥ�Ӿ���Ϊ��������
                    for (int is = 0; is <= N - i; is++) // �����Ͻ���Ϊ���(is, js)��������S(i��j)�����п��ܾ���
                        for (int js = 0; js <= N - j; js++) { //��Ӧi��j�е��Ӿ��������Ͻ����귶Χ��[0, N - j]�� [0�� N - i]
                            int sum = 0;
                            for (int row = is; row < is + i; row++)
                                for (int col = js; col < js + j; col++)
                                    sum += A[row][col];
                            if (sum > max)
                                max = sum;
                        }
        cout << max << endl;
    }
}
