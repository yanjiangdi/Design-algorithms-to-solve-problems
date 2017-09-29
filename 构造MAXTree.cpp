#include <iostream>
#include <vector> 
#include <stack>
using namespace std;

class MaxTree {
public:
    vector<int> buildMaxTree(vector<int> A, int n) {
        // write code here
        stack<int> s; //用栈存储数组下标，栈内顺序保证自栈顶向下递增
        vector<int> result(n, -1);
        s.push(0);
        for(int i = 1; i < n; ++i)
        {
            //当前元素小于栈顶对应元素则入栈（递增顺序）
            //大于则出栈并与之后的栈顶比较，此时找到了左右首个大于当前元素的位置
            if(A[i] < A[s.top()])
                s.push(i);
            else
            {
                int index = s.top(); //记录确定父节点的子节点下标
                s.pop();
                if(s.empty()) //栈空则左边无大值，当前位置即父节点
                {
                    result[index] = i;
                    s.push(i); //当前位置入栈，后续寻找其父节点
                }
                else //不空则比较左右
                {
                    if(A[i] < A[s.top()]) //右小于左则右是父节点，右入栈
                    {
                        result[index] = i;
                        s.push(i);
                    }
                    else //左小于右则左是父节点，再寻找左的父节点，i自减，当前节点继续与左（栈顶）比较
                    {
                        result[index] = s.top();
                        --i;
                    }
                }      
            }  
        }
        //栈中剩余元素递增，下面是上面的父节点
        while(!s.empty())
        {
            int index = s.top();
            s.pop();
            if(s.empty()) //最大的，找到根节点
                result[index] = -1;
            else
                result[index] = s.top();
        }
        return result;
    }
};
