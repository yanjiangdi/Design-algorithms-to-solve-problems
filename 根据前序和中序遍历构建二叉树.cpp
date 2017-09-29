#include <iostream>
#include <vector>
using namespace std; 
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
class tree{

public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
		size_t size1 = pre.size();
        int size2 = vin.size();
        if(size1 == 0 && size2 == 0)    return NULL;
        if(size1 > size2 || size1 < size2) return NULL;
        vector<int> pre_left,pre_right,vin_left,vin_right;
        TreeNode* root = new TreeNode(pre[0]);
        int pos = 0;
        for(int i = 0;i < size2;i++)
        {
            if(vin[i] == pre[0])
            {
                pos = i;
                break;
            }
        }       
        for(int i = 0;i < pos;i++)
        {
            pre_left.push_back(pre[i+1]);
            vin_left.push_back(vin[i]);
        }
        for(int i = pos + 1;i < size2;i++)
        {
            pre_right.push_back(pre[i]);
            vin_right.push_back(vin[i]);     
        }
         
        root->left = reConstructBinaryTree(pre_left,vin_left);
        root->right = reConstructBinaryTree(pre_right,vin_right);
        return root;
    }

};
int main()
{
	return 0;
}
