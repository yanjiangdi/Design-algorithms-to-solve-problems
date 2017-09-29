#include <stack>
#include <iostream>
using namespace std;
class Solution
{
public:
    void push(int node) {
    	while(!stack2.empty())
    	{
    		int temp=stack2.top();
    		stack1.push(temp);
    		stack2.pop();
		}
        stack2.push(node);
        while(!stack1.empty())
		{
			int t=stack1.top();
			stack2.push(t);
			stack1.pop();	
		}     
    }

    int pop() {
        int temp=stack2.top();
        stack2.pop();
        return temp;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

int main()
{
	Solution s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	return 0;
}
