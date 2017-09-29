#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
struct ListNode {
       int val;
       struct ListNode *next;
       ListNode(int x) :
              val(x), next(NULL) {
        }
  };

 vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> v;
        vector<int> v2;
        ListNode *node=head;
        while(node)
        {
        	v.push_back(node->val);
        	node=node->next;
		}
		for(int i=v.size()-1;i>=0;i--)
		{
			v2.push_back(v[i]);
		}
		return v2;
    }
int main()
{
	ListNode *n1=new ListNode(1);
	ListNode *n2=new ListNode(2);
	ListNode *n3=new ListNode(3);
	n1->next=n2;
	n2->next=n3;
	vector<int> v=printListFromTailToHead(n1);
	for(int i=0;i<v.size();i++ )
	{
		cout<<v[i]<<" ";	
	}
	return 0;

}
