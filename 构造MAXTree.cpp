#include <iostream>
#include <vector> 
#include <stack>
using namespace std;

class MaxTree {
public:
    vector<int> buildMaxTree(vector<int> A, int n) {
        // write code here
        stack<int> s; //��ջ�洢�����±꣬ջ��˳��֤��ջ�����µ���
        vector<int> result(n, -1);
        s.push(0);
        for(int i = 1; i < n; ++i)
        {
            //��ǰԪ��С��ջ����ӦԪ������ջ������˳��
            //�������ջ����֮���ջ���Ƚϣ���ʱ�ҵ��������׸����ڵ�ǰԪ�ص�λ��
            if(A[i] < A[s.top()])
                s.push(i);
            else
            {
                int index = s.top(); //��¼ȷ�����ڵ���ӽڵ��±�
                s.pop();
                if(s.empty()) //ջ��������޴�ֵ����ǰλ�ü����ڵ�
                {
                    result[index] = i;
                    s.push(i); //��ǰλ����ջ������Ѱ���丸�ڵ�
                }
                else //������Ƚ�����
                {
                    if(A[i] < A[s.top()]) //��С���������Ǹ��ڵ㣬����ջ
                    {
                        result[index] = i;
                        s.push(i);
                    }
                    else //��С���������Ǹ��ڵ㣬��Ѱ����ĸ��ڵ㣬i�Լ�����ǰ�ڵ��������ջ�����Ƚ�
                    {
                        result[index] = s.top();
                        --i;
                    }
                }      
            }  
        }
        //ջ��ʣ��Ԫ�ص���������������ĸ��ڵ�
        while(!s.empty())
        {
            int index = s.top();
            s.pop();
            if(s.empty()) //���ģ��ҵ����ڵ�
                result[index] = -1;
            else
                result[index] = s.top();
        }
        return result;
    }
};
